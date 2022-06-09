#include<iostream>
#include<string>
using namespace std;
int a(int n)
{
		string Name="AMAN,20/UBS/010\n";
	cout<<Name;
	
        {
string PHY="Now learn to use functions in C++";	
	cout<<PHY;
         }
	if (n==0)
	{
		return 0;
	}
	return a(n-1)+1;
}


int factorial(int n){
	if (n==1){
		return 1;
	}
return factorial(n-1)*n;
}

int main()
{
	int x;
	x=a(2);
	cout<<factorial(2);
}
