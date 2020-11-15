#include "std_lib_facilities.h"
int main()
{
	// 1. feladat: Deklaráljuk a születési évet
	int birth_year = 2000;
	// 2. feladat: Kiíratjuk különböző számrendszerekben
	// 7. feladat: Kiírjuk a base-eket
	cout << showbase << dec;
	cout << birth_year << "\t(decimal)\n"					//decimális
 		 << hex << birth_year << "\t(hexadecimal)\n"		//hexadecimális
 		 << oct << birth_year << "\t(octal)\n";				//oktális
 	// 5,6. feladat: Visszaállítjuk decimálisra a számot és kiírjuk
 	cout.unsetf(ios::oct);
 	cout << birth_year << '\n';
 	/* 8. feladat: Szám beolvasás a következő változókba,
 	   majd kiíratás különböző számrendszerekben: */
 	/*int a,b,c,d;
 	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n'; */
	/* Magyarázat: Az első szám decimális számrendszerben íródik ki,
	   a második szám átáll oktális számrendszerre, az utolsó kettő pedig
	   hexadecimális formában íródik ki. */
	// 9. feladat: Adott szám kiíratása különböző formákban
	cout << 1234567.89 << "\t\t(defaultfloat)\n"
 		 << fixed << 1234567.89 << "\t(fixed)\n"
 		 << scientific << 1234567.89 << "\t(scientific)\n";
 	/* Legpontosabb reprezentáció: defaultfloat mindig a legpontosabb formában
 	   írja ki az adott számot (fixált és tudományos közül választ).
 	   Ez esetben a tudományos forma a pontosabb. */
 	// 10. feladat: Tábla készítése adatokból
 	cout << "Név:" << setw(30) << "Telefonszám:" << setw(10) << "Email:" << '\n';
 	cout << "Szanyi Manó Hunor" << setw(14) << "0680468341" << setw(25) << "szanyiman@gmail.com" << '\n';
 	cout << "Legjobb Barát1" << setw(17) << "0680466336" << setw(21) << "barat1gmail.com" << '\n';
 	cout << "Legjobb Barát2" << setw(17) << "0680446373" << setw(21) << "barat2gmail.com" << '\n';
 	cout << "Legjobb Barát3" << setw(17) << "0680446373" << setw(21) << "barat3gmail.com" << '\n';
 	cout << "Legjobb Barát4" << setw(17) << "0680744788" << setw(21) << "barat4gmail.com" << '\n';
 	cout << "Legjobb Barát5" << setw(17) << "0680532678" << setw(21) << "barat5gmail.com" << '\n';
}