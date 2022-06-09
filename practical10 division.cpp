#include<iostream>
#include<string>
using namespace std;

int main() {
string task="Write a C++Program for finding Quotient and Remainder of Two numbers(Divisor and Dividend by user)";
	cout<<task<<endl;
		string Name="AMAN,20/UBS/010\n";
	cout<<Name;
cout<<endl;
 int  DIVISOR,DIVIDEND, QUOTIENT, REMAINDER;

    cout << "please provide me DIVIDEND  ";
    cin >> DIVIDEND;

    cout << "please also provide me DIVISOR   ";
    cin >> DIVISOR;
     REMAINDER = DIVIDEND % DIVISOR;

   QUOTIENT = DIVIDEND /DIVISOR;
    cout << " Your Quotient is = " << QUOTIENT << endl;
    cout << " And your Remainder is = " <<  REMAINDER<<endl;
return 0;
}

	
	
	
	

