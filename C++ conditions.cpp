#include <iostream>
#include<cmath>
using namespace std;

int main() 
{	string Name="AMAN,20/UBS/010\n";
	cout<<Name;
  int A,B,C;
  cout<<"Give some quadric equation coefficient(A)";
  cin>>A;
  cout<<"Give some another quadric equation coefficient(B)";
  cin>>B;
  cout<<"Give some another quadric equation coefficient(C)";
  cin>>C;
   int D=B^2-4*A*C;
   cout<<sqrt(D);
   if(D==0){
  	 cout<<"roots are real and equal";}
  else if(D<0){
  
  	cout<<"roots are not real";}
  	  else {
			  cout<<"roots are real but not equal";}
	  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

