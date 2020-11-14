#include "std_lib_facilities.h"

//1. Pontok definiálása
struct Point {
    int x;
    int y;
};

//2. Pontokat olvashatóvá tesszük
istream& operator>>(istream& is, Point& p)
{
    char ch1;
    if (is >> ch1 && ch1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2;
    char ch3;
    int xx;
    int yy;
    is >> xx >> ch2 >> yy >> ch3;
    if (!is || ch3 != ')') {
        if (is.eof()) return is;
        error("bad point");
    }
    p.x = xx;
    p.y = yy;
    return is;
}

//3. Kiírhatóvá tesszük a pontokat
ostream& operator<<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}

//5. Pontok visszaolvasása fájlból
void fill_from_file(vector<Point>& points, string& name)
{
    ifstream ist {name};				// Kiolvasás
    if (!ist) error("can't open input file ", name);	// Ha nem tudjuk megnyitni, hiba
    for (Point p; ist >> p; )
        points.push_back(p);
}

int main()
try {
    //2. Megkérjük a felhasználót adjon meg 7 pontot és eltároljuk ezeket egy vektorban
    cout << "Please enter seven sets of x, y points, like this: (x,y)\n";
    vector<Point> original_points;
    //2. Amíg nem lesz a vektor nagysága 7, addig kérünk pontokat
    int i = 1;
    while (original_points.size() < 7) {
        cout << i << ". point:\n";
        Point p;
        cin >> p;
        original_points.push_back(p);
        i++;
    } 

    //3. Kiírjuk a original_points-okat egymás alá
    cout << "The original given points:\n";
    for (Point p : original_points)
        cout << p;				   // Eredeti pontok kiíratása
    cout << '\n';

    //4. Kiírjuk a pontokat fájlba
    string file = "mydata.txt";
    ofstream ost { file };
    if (!ost) error("could not open file ", file); // Hiba ha nem férünk a fájlhoz

    for (Point p : original_points)		   // Pontok kiírása fájlba
        ost << p;
    ost.close();				   // Fájl lezárása

    //5. Fájl visszaolvasása vektorba
    cout << "The points read from file:\n";
    vector<Point> processed_points;		   // Feldolgozott pontok vektor létrehozása
    fill_from_file(processed_points, file);	   //

    for (Point p : processed_points)		   // Pontok visszatöltése vektorba
        cout << p;				   // Feldolgozott pontok kiíratása
    cout << '\n';

    if (original_points.size() != processed_points.size()) // Ha nem egyezik meg a kettő vektor nagysága, akkor hiba
        cout << "Something's wrong!\n";
}
//7. Hiba esetén error kiíratása
catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "Something terrible has happened!\n";
    return 2;
}