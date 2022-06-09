#include<iostream>
#include<string>
using namespace std;
#include<cmath>
int main()
    {
	string objective="objective=write a program to convert centimetre into metre and kilometre.";
	cout<<objective<<endl;
double   A,M,R,metre,kilometre;
cout<<"Please give me any number in centimetre(A) = ";
cin>>A;
{  M=A/100;
 R=A/100000;
}
string GO="your number is changed in metre which is  ";
cout<<GO;
cout<<M;
string WOW=" metre\n";
cout<<WOW;
string GREAT="your number is changed in kilometre which is   ";
cout<<GREAT;
cout<<R;
string DONE=" kilometre\n";
cout<<DONE;
	
}
