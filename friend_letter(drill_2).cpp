#include "std_lib_facilities.h" // Kiegészítő fáj csatolása
int main() // main függvény lefutása innen kezdődik
{
	cout << "Enter the name of the person you want to write to\n"; // Bekérjük a felhasználótól a címzett nevét.
	string first_name; // Létrehozzuk a változót a névnek
	cin >> first_name; // Beolvassuk a változóba a bekért nevet
	cout << "Dear " << first_name << ",\n"; // Üdvözöljük a címzettet
	cout << "How are you? I'm good. I miss you so much.\n"; // Személyes kérdés/üzenet
	cout << "Please enter your friend's name\n"; // Bekérjük a felhasználótól egy barátja nevét
	string friend_name; // Létrehozzuk a változót a névnek
	cin >> friend_name; // Beolvassuk a változóba a bekért nevet
	cout << "Have you seen " << friend_name << " lately?\n"; // Kérdés címzetthez a barátról
	char friend_sex = 0; // Létrehozzuk a változót a barát nemének és adunk neki 0 kezdőértéket
	cout << "Please enter an 'm' if your friend is male, or enter 'f' if your friend is female\n"; // Nem bekérése felhasználótól
	cin >> friend_sex; // Barát nem eltárolás
	if(friend_sex=='m') // Ha férfi
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else // Ha nő (kizárásos alapon)
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	cout << "Please enter the age of the recipient\n"; // Címzett kora bekérés
	int age; // Kor változó
	cin >> age; // Kor változó értékadás
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if(age<=0 || age>=110)
	{
		simple_error("you're kidding!");
	}
	if(age<12)
	{
		cout << "Next year you will be " << age+1 << ".\n";
	}
	if(age==17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	if(age>70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "Yours sincerely,\n\n\nManó\n"; // Elköszönés
}