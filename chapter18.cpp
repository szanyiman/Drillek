#include "std_lib_facilities.h"
// Drill első rész

// 1. feladat: Definiáljunk egy globális tömb változót
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

// 2. feladat: Definiáljunk egy eljárást, aminek paraméterei egy tömb és egy tömb index
void f(int pa[], int n)
{
	// 3./a feladat: Definiáljunk 10 elemű tömböt
	int la[10] = { };

	// 3./b feladat: Legyenek la elemei ga-nak elemei (másolás)
    for (int i = 0; i < n; ++i) la[i] = pa[i];

    // 3./c feladat: Írjuk ki az la elemeit
    cout << endl;
    cout << "3./c ; Írjuk ki az la elemeit\n";
    for (int i = 0; i < n; ++i) cout << la[i] << ' ';
    cout << '\n';

	// 3./d feladat: Definiáljunk egy n elemű pointer tömböt
    int* p = new int[n];

    // 3./e feladat: Másoljuk át az elemeket ebbe a tömbbe
    for (int i = 0; i < n; ++i) p[i] = pa[i];
    
    // 3./f feladat: Írjuk ki a free-store tömb elemeit
    cout << endl;
    cout << "3./f ; Írjuk ki a free-store tömb elemeit\n";
    for (int i = 0; i < n; ++i) cout << p[i] << ' ';
    cout << '\n';

	// 3./g feladat: Deallokáljuk a free-store tömböt (felszabadítjuk a memóriát)
    delete[] p;
}

// Függvény a faktoriális tömb feltöltéséhez
int fac(int n) { return n > 1 ? n*fac(n-1) : 1; }

int main()
{
	// 4./a feladat: Hívjuk meg az f eljárást ga paraméterrel
	cout << endl;
    cout << "Normál tömb használatával\n";
    f(ga, 10);

    // 4./b feladat: Definiáljuk az aa tömböt és töltsük fe
    // az első 10 elem faktoriális értékével
    int aa[10] = {};
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i + 1);

    // 4./c feladat: Hívjuk meg az f eljárást aa paraméterrel
    cout << endl;
    cout << "Faktoriális tömb használatával\n";
    f(aa, 10);
}