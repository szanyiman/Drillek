#include "std_lib_facilities.h"

// 1. feladat: Definiáljuk a a következő template-et
template<class T> struct S {
    S() : val(T()) { }

// 2. feladat: Adjunk meg egy konstruktort, hogy iniciálni tudjuk a T-vel
    S(T d) : val(d) { } 

// 10. feladat: Cseréljük le a set() függvényt a következőre
    T& operator=(const T&);

// 5. feladat: Adjunk meg egy get() template függvényt, ami visszaadja a val referenciáját
    T& get();

// 11. feladat: Biztosítsunk egy konstans és egy nem konstans verziót a get()-nek
    const T& get() const;

// 9. feladat: Használjuk a set() függvényt, hogy megváltoztathassuk az értékeket
    void set(const T& d);

// 7. feladat: Legyen val privát
private:
    T val;
};

template<class T> T& S<T>::operator=(const T& d)
{
    val = d;
    return val;
}

// 6. feladat: Rakjuk a get() definícióját az osztályon kívülre
template<class T> T& S<T>::get() { return val; }

template<class T> const T& S<T>::get() const { return val; }

template<class T> void S<T>::set(const T& d) { val = d; }

template<class T> istream& operator>>(istream& is, S<T>& ss)
{
    T v;
    cin >> v;
    if (!is) return is;
    ss = v;
    return is;
}

// 12. feladat: Definiáljuk a következő template-et, ami olvas a cin-ből a v-be
template<class T> void read_val(T& v)
{
    cin >> v;
}

// 14. feladat: Defininiáljunk bemeneti és kimeneti operátorokat a vector<T>-nek
// Mindkettőhöz használjuk a következő formátumot { val, val, val }
// Ezzel a read_val függvény képes lesz kezelni az S<vector<int>> változót
template<class T> ostream& operator<<(ostream& os, const vector<T>& d)
{
    os << "{ ";
    for (int i = 0; i < d.size(); ++i) 
    {
        os << d[i];
        if (i < d.size()-1) os << ',';
        os << ' ';
    }
    os << "}";
    return os;
}

// 14. feladat: -||-
template<class T> istream& operator>>(istream& is, vector<T>& d)
{
    char ch1;
    char ch2;
    T temp;
    vector<T> v_temp;
    is >> ch1;
    if (!is) return is;
    if (ch1!='{') 
    {
        is.clear(ios_base::failbit);
        return is;
    }
    while (cin>>temp>>ch2 && ch2==',') 
    {
        v_temp.push_back(temp);
    }
    if (ch2!='}') 
    {
        is.clear(ios_base::failbit);
        return is;
    }
    v_temp.push_back(temp);

// Most másoljuk temp vektort, hogy d ne változzon, ha a bemenet hibás
    d = v_temp;
    return is;
}

int main(){

// 3. feladat: Definiáljunk típusváltozókat majd adjunk nekik tetszőleges értéket
    S<int> sint(5);
    S<char> sch('p');
    S<double> sdouble(3.74);
    S<string> sstr("Program");
    vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    S< vector<int> > sv(vi);

// 4. feladat: Írjuk ki ezeknek a változóknak az értékeit
/*    cout << "sint: " << sint.val << "\n";
      cout << "sch: " << sch.val << "\n";
      cout << "sdouble: " << sdouble.val << "\n";
      cout << "sstr: " << sstr.val << "\n";
      for (int i = 0; i < sv.val.size(); ++i)
      cout << "sv[" << i << "]: " << sv.val[i] << "\n";
*/

// 8. feladat: Ismételjük meg a 4. feladatot a get() függvénnyel
    cout << endl;
    cout << "8. feladat: Ismételjük meg a 4. feladatot a get() függvénnyel\n\n";
    cout << "sint: " << sint.get() << "\n";
    cout << "sch: " << sch.get() << "\n";
    cout << "sdouble: " << sdouble.get() << "\n";
    cout << "sstr: " << sstr.get() << "\n";
    for (int i = 0; i < sv.get().size(); ++i)
    cout << "sv[" << i << "]: " << sv.get()[i] << "\n";
    cout << sv.get() << "\n";

// 9. feladat: Használjuk a set() függvényt, hogy megváltoztathassuk az értékeket
    cout << endl;
    cout << "9. feladat: Használjuk a set() függvényt, hogy megváltoztathassuk az értékeket\n";
    sint.set(22);
    sch.set('q');
    sdouble.set(4.14);
    sstr.set("UjProgram");
    vi[1] = 22;
    sv.set(vi);
    cout << "\nsint: " << sint.get() << "\n";
    cout << "sch: " << sch.get() << "\n";
    cout << "sdouble: " << sdouble.get() << "\n";
    cout << "sstr: " << sstr.get() << "\n";
    for (int i = 0; i<sv.get().size(); ++i)
        cout << "sv[" << i << "]: " << sv.get()[i] << "\n";
    cout << sv.get() << "\n";

// 10. feladat: Cseréljük le a set() függvényt
    cout << endl;
    cout << "10. feladat: Cseréljük le a set() függvényt\n";
    sint = 45;
    sch = 'r';
    sdouble = 5.14;
    sstr = "Program3";
    vi[1] = 33;
    sv = vi;
    cout << "\nsint: " << sint.get() << "\n";
    cout << "sch: " << sch.get() << "\n";
    cout << "sdouble: " << sdouble.get() << "\n";
    cout << "sstr: " << sstr.get() << "\n";
    for (int i = 0; i<sv.get().size(); ++i)
        cout << "sv[" << i << "]: " << sv.get()[i] << "\n";
    cout << sv.get() << "\n";

// 11. feladat: Biztosítsunk egy konstans és egy nem konstans verziót a get()-nek
    cout << endl;
    cout << "11. feladat: Biztosítsunk egy konstans és egy nem konstans verziót a get()-nek\n";
    const S<int> c_sint(5);
    cout << "\nc_sint: " << c_sint.get() << "\n"; // requires const getter

// 13. feladat: Használjuk a read_val() függvényt minden változón kivéve a vektoron
    cout << endl;
    cout << "13 feladat: read_val() függvénnyel kérjünk be értékeket (kivéve vektor)\n";
    cout << "\nsint: ";
    read_val(sint);
    cout << "sch: ";
    read_val(sch);
    cout << "sdouble: ";
    read_val(sdouble);
    cout << "sstr: ";
    read_val(sstr);
    cout << "\nsint: " << sint.get() << "\n";
    cout << "sch: " << sch.get() << "\n";
    cout << "sdouble: " << sdouble.get() << "\n";
    cout << "sstr: " << sstr.get() << "\n\n";

// 14. feladat: Írjuk ki az értékeket
    cout << "14. feladat: Kérjünk be egy vektort a read_val() függvénnyel és írjuk ki a get() függvénnyel\n";
    cout << "\nsv: ";
    read_val(sv);
    cout << "\nsv: " << sv.get() << "\n";
}