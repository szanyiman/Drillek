#include "std_lib_facilities.h"
int main() 
{
	cout << "Enter an integer number with a unit: \nAccepted units: cm, m, in, ft\n";
	double n1 = 0, n2 = 0;
	double prevsm=0, prevla=0;
	string unit =" ";
	double sum=0;
	int valnum=0;
	vector<double> v;
while(cin >> n1 >> unit)
{
	if(unit=="cm" || unit=="m" || unit=="in" || unit=="ft")
	{
	if(n1>prevla) {prevla=n1; cout << "the largest so far\n";}
	if(n1<prevsm) {prevsm=n1; cout << "the smallest so far\n";}
	if(unit == "cm") {sum += (n1/100);valnum++;v.push_back(n1/100);}
	if(unit == "m")  {sum+= n1;valnum++;v.push_back(n1);}
	if(unit == "in") {sum+= n1*0.0254;valnum++;v.push_back(n1*0.0254);}
	if(unit == "ft") {sum+= n1*0.3048;valnum++;v.push_back(n1*0.3048);}
	/*cout << "first number = " << n1 << "second number = " << n2 << endl;
	if(n1>n2) cout << "the larger value is: " << n1 << "\n" "the smaller value is: " << n2 << endl;
	if(n1<n2) cout << "the larger value is: " << n2 << "\n" "the smaller value is: " << n1 << endl;
	if(n1==n2) cout << "a két szám egyenlő\n"; 
	if(abs(n1-n2)<=0.01) cout << "the numbers are almost equal\n";*/
	}
	else {cout << "This is an incorrect value! Please try again!" <<endl;}
	cout << "Enter an integer number: \n";
}
	cout << "the largest value: " << prevla << endl;
	cout << "the smallest value: " << prevsm << endl;
	cout << "the value's sum: " << sum << " meters" << endl;
	cout << "the number of values: " << valnum << endl;
	cout << "the given values converted to meters: ";
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ' ';
	}
	cout << endl;
	return 0;
}
