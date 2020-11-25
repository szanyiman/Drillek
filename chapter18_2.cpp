#include "std_lib_facilities.h"
// 1. feladat: Definiáljunk egy globális vektort és adjuk neki értékeket
vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
// 2. feladat: Definiáljunk egy eljárást a vektorkezelésre
void f(vector<int> v)
{
	// 3./a feladat: Definiáljunk egy vektort annyi eleműre
	// ahány elemű a paramétervektor
	vector<int> lv(v.size());
	// 3./b feladat: Másoljuk át a lv vektorba a v vektor elemeit
	lv = v;
	// 3./c feladat: Írassuk ki a lv vektor elemeit:
	cout << endl;
	cout << "Az lv vektorba másolt elemek:\n";
	for (auto& a : lv) cout << a << '\t';
    cout << '\n';

	// 3./d feladat: Másoljuk át a lv2 vektorba a v vektor elemeit
	vector<int> lv2 = v;
	// 3./e feladat: Írassuk ki a lv2 vektor elemeit:
	cout << endl;
	cout << "Az lv2 vektorba másolt elemek:\n";
    for (auto& a : lv2) cout << a << '\t';
    cout << '\n';
}

// Függvény a faktoriális vektor feltöltéséhez
int fac(int n) { return n > 1 ? n * fac(n - 1) : 1; }

int main()
{
	// 4./a feladat: Hívjuk meg az f eljárást gv paraméterrel
	cout << "4./a feladat: Hívjuk meg az f eljárást gv paraméterrel, írassuk ki az átmásolt elemeket!\n";
	f(gv);

	// 4./b feladat: Definiáljunk egy vv nevű vektort
	// az első tíz elem faktoriális értékével
    vector<int> vv(10);
    for (int i = 0; i < vv.size(); ++i)
        vv[i] = fac(i + 1);
    // 4./c feladat: Hívjuk meg az f eljárást vv paraméterrel
    cout << endl;
    cout << "4./c feladat: Hívjuk meg az f eljárást vv paraméterrel, írassuk ki az átmásolt elemeket!\n";
    f(vv);
}