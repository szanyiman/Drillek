#include "std_lib_facilities.h"
// Drill 1
// 4. feladat: Írjunk eljárást ami kiírja os-be 'a' tömb elemeit (úgy vesszük 10 elemű)!
void print_array10(ostream& os, int* a) {
    for (int i = 0; i<10; ++i)
        os << a[i] << "\n";
}

// 7. feladat: Írjunk eljárást, ami kiírja os-be 'a' töm elemet (úgy vesszük n elemű)!
void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}

// 10. feladat: Ismételjük meg az 5,6,8. feladatot vektor eljárással!
void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}

int main()
{
	cout << "Első rész:" << endl;
    // 1. feladat: Hozzuk létre a pointer tömböt!
    int* a = new int[10];

    // 2. feladat:
    cout << "2. feladat: Írjuk ki a 10 pointer tömb értékeit!\n";
    for (int i = 0; i<10; ++i)
        cout << a[i] << "\n";

    // 3. feladat: Szabadítsuk fel a memórát!
    delete[] a;

    // 5. feladat: Foglaljunk le egy 10 elemű pointer tömböt, adjunk értékeket, és irassuk ki!
    cout << "5. feladat: Foglaljunk le egy 10 elemű pointer tömböt, adjunk értékeket, és irassuk ki ezeket!\n";
    int* b = new int[10];
    for (int i = 0; i<10; ++i){
        b[i] = 100 + i;
        cout << b[i] << "\n";
    }
    // 7. feladat: Írjuk ki print_array() eljárással a tömb elemeit!
    print_array10(cout,b);
    delete[] b;

    // 6. feladat: Foglaljunk le egy 11 elemű pointer tömböt, adjunk értékeket, és írassuk ki!
    cout << "6. feladat: Foglaljunk le egy 11 elemű pointer tömböt, adjunk értékeket, és irassuk ki ezeket!\n";
    int* c = new int[11];
    for (int i = 0; i<11; ++i)
        c[i] = 100 + i;
    print_array10(cout,c);
    cout << c[10] << "\n";
    delete[] c;

    // 8. feladat: Foglaljunk le egy 20 elemű pointer tömböt, adjunk értékeket, és írassuk ki!
    cout << "8. feladat: Foglaljunk le egy 20 elemű pointer tömböt, adjunk értékeket, és írassuk ki ezeket!\n";
    int* d = new int[20];
    for (int i = 0; i<20; ++i)
        d[i] = 100 + i;
    print_array(cout,d,20);
    delete[] d;

    // 10. feladat: Ismételjük meg az 5,6,8. feladatot vektor eljárással!
    cout << "10. feladat: Ismételjük meg az 5,6,8. feladatot vektor eljárással!\n";
    vector<int> v;
    for (int i = 0; i<10; ++i)
        v.push_back(100+i);
    print_vector(cout,v);

    cout << "\n";
    vector<int> v2;
    for (int i = 0; i<11; ++i)
        v2.push_back(100+i);
    print_vector(cout,v2);

    cout << "\n";
    vector<int> v3;
    for (int i = 0; i<20; ++i)
        v3.push_back(100+i);
    print_vector(cout,v3);

    cout << "Második rész:" << endl;

    // Drill 2
    // 1. feladat: Hozzunk létre egy int változót 7-es értékkel, a címét csatoljuk
    // a p1-es mutató változóhoz
    int i1 = 7;
    int* p1 = &i1;

    // 2. feladat: Írjuk ki a p1 címét és az értéket amire mutat!
    cout << "2. feladat: Írjuk ki a p1 címét és az értéket amire mutat!\n";
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";

    // 3. feladat: Hozzunk létre egy 7 elemű int pointer tömböt, töltsük fel 2-es
    // hatványú számokkal!
    int* p2 = new int[7];
    for (int i = 0; i<7; ++i)
        p2[i] = pow(2,i);	// Hatványoz 2-vel

    // 4. feladat: Írjuk ki p2 tömb elemeit! *print_array függvényt használtam ismét*
    cout << "4. feladat: Írjuk ki p2 címét és a tömb elemeit!\n";
    cout << "p2: " << p2 << "\n";
    cout << "print_array(cout,p2,7):\n";
    print_array(cout,p2,7);

    // 5. feladat: Deklaráljunk egy p3 nevű int pointer-t, legyen értéke p2!
    int* p3 = p2;

    // 6. feladat: Rendeljük hozzá p1-et p2-höz!
    p2 = p1;

    // 7. feladat: Rendeljük hozzá p3-at p2-höz!
    p2 = p3;

    // 8. feladat: Írjuk ki p1 és p2 értékét, illetve hogy mire mutatnak!
    cout << "8. feladat: Írjuk ki p1 és p2 értékét, illetve hogy mire mutatnak!\n";
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";

    // 9. feladat: Szabadítsuk fel memória területeket!
    delete[] p2;
    p3 = 0;

    // 10. feladat: Hozzunk létre egy 10 elemű int pointer tömböt, töltsük fel 2-es
    // hatványú számokkal és rendeljük hozzá a címeket p1hez
    p1 = new int[10];
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);

    // 11. feladat: Hozzunk létre egy 10 elemű tömböt!
    p2 = new int[10];

    // 12. feladat: Másoljuk át a p1 tömb elemeit a p2 tömbbe!
    cout << "12. feladat: Másoljuk át a p1 tömb elemeit a p2 tömbbe!\n";
    for (int i = 0; i<10; ++i)
        p2[i] = p1[i];
    // Opcionális kiírás!
    print_array(cout,p2,10);

    // 13. feladat: Ismételjük meg az 10-12. feladatot vektorokkal! *print_vector() eljárást használtam*
    cout << "13. feladat: Ismételjük meg az 10-12. feladatot vektorokkal!\n";
    vector<int> vec1;
    for (int i = 0; i<10; ++i)
        vec1.push_back(pow(2,i));
    vector<int> vec2;
    for (int i = 0; i<vec1.size(); ++i)
        vec2.push_back(vec1[i]);
    print_vector(cout,vec2);
}