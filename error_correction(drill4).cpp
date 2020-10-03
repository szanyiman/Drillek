#include "std_lib_facilities.h"
int main(){
try {
cout<<"1. Success!\n"; // Cout<<"Success!\n"; - érzékeny nagybetűre cout-nál
cout<<"2. Success!\n"; // cout<<"Success!\n; - hiányos szintaxis (végéről egy idézőjel)
cout<<"3. Success!\n"; // cout<<"Success"<<!\n" - elírás, ! helyett " szükséges
cout<<"4. Success!"<<"\n"; // cout<<success<<'\n'; - nincs success változó definiálva, karakter sorozatot ""-be kell rakni
int res=7; vector<int> v(10);v[5]=res;cout<<"5. Success!\n"; // string res=7;vector<int> v(10);v[5]=res;cout<<"Success!\n"; - string típus helyett int kell
vector<int> v1(10); v1[5]=7; if (v1[5]==7) cout<<"6. Success!\n"; // vector<int> v(10);v(5)=7;if (v(5)!=7) cout<<'Success!\n"; - hibás szintaxis és feltétel
if (5!=3) cout<<"7. Success!\n"; else cout<<"Fail!\n"; // if (cond) cout<<"Success!\n"; else cout<<"Fail!\n"; - hibás feltétel
bool c=false; if(!c) cout<<"8. Success!\n"; else cout<<"Fail!\n"; // bool c=false; if(c) cout<<"Success!\n";else cout<<"Fail!\n"; - hibás feltétel
string s="ape"; bool c1="fool">s;if(c1) cout<<"9. Success\n"; // string s="ape"; boo c="fool"<s;if(c) cout<<"Success!\n"; - típusnév elírás
string s1="ape";if(s1!="fool") cout<<"10. Success!\n"; // string s="ape"; if(s=="fool") cout<<"Success!\n"; - hibás feltétel
string s2="ape";if (s2!="fool") cout<<"11. Success!\n"; // string s="ape";if(s=="fool") cout<"Success!\n"; - hibás feltétel és szintaxis hiba
string s3="ape"; if(s3!="fool") cout<<"12. Success!\n"; // string s="ape"; if(s+"fool") cout<"Success\n"; - hibás feltétel és szintaxis hiba
vector<char> v2(5); for (int i=0; i<v2.size();++i);cout<<"13. Success!\n"; // vector<char> v(5); for (int i=0; 0<v.size();++i);cout<<"Success!\n"; - hibás ciklus
vector<char> v3(5); for(int i=0; i<=v3.size();++i);cout<<"14. Success!\n"; // vector<char> v(5); for(int i=0;i<=v.size();++i);cout<<"Success!\n"; - nem találtam hibát
string s4="15. Success!\n"; for (int i=0;i<6;++i); cout<<s4; // string s="Success!\n"; for(int i=0; i<6; ++i) cout<<s[i]; - hibás kiíratás
if(true)cout<<"16. Success!\n";else cout<<"Fail!\n"; // if(true) then cout<<"Success!\n";else cout<<"Fail!\n"; - nem kell "then"
int x=2000; int c2=x; if(c2==2000) cout<<"17. Success!\n"; // int x=2000; char c=x; if(c==2000) cout<<"Success!\n"; - nem találtam hibát
string k="18. Success!\n";for (int i=0;i<10;++i); cout<<k; // string í="Success!\n";for (int i=0;i<10;++i) cout<<s[i]; - helytelen változónév
vector<int> v4(5);for (int i=0;i<=v4.size();++i);cout<<"19. Success!\n"; // vector v(5);for (int i=0;i<=v.size();++i);cout<<"Success!\n"; - vektor típus hiányzik
int i=0; int j=9; while(i<10)++i; if (j<=i) cout<<"20. Success!\n"; // int i=0; int j=9; while(i<10)++j;if(j<i) cout<<"Success!\n"; - nem j változót kell léptetni és hibás feltétel
int x1=2; double d=5/(x1-1); if(d==2*x1+1) cout<<"21. Success!\n"; // int x=2;double d=5/(x-2);if(d==2*x+0.5)cout<<"Success!\n"; - rossz d változó értékmegadás és hibás feltétel
string s5="22. Succes!\n"; for(int i=0;i<=10;++i); cout<<s5; // string<char> s="Success!\n"; for(int i=0;i<=10;++i) cout<<s[i]; - helytelen kiíratás
int i1=0; int j1=0; while(i1<10) ++i1; if(i1>j1) cout<<"23. Success!\n"; // int i=0;while(i<10)++j;if(j<i) cout<<"Success!\n"; - nincs j változó deklarálva és rossz változót léptetünk
int x2=4; double d1=5/(x2-3); if(d1=2*x2/1+1) cout<<"24. Success!\n"; // int x=4; double d=5/(x-2);if(d=2*x/0.5) cout<<"Success!\n"; - rossz d változó értékmegadás és hibás feltétel
cout<<"25. Success!\n"; // cin>>Success!\n"; rossz parancs használata hibás szintaxissal
keep_window_open();
return 0;
}
catch(exception& e) {
	cerr<<"error: "<<e.what()<<'n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr<<"Oops:unknown exception!\n";
	keep_window_open();
	return 2;
}
}
