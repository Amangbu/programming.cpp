#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
int marks = 54;
switch (marks) {
  case 91 ... 100:
    cout << "O means outstanding";
    break;
  case 81 ... 90:
    cout << "A+ GRADE";
    break;
  case 71 ... 80:
    cout << "A GRADE";
    break;
  case 61 ... 70:
    cout << "B+ GRADE";
    break;
  case 51 ... 60:
    cout << "C GRADE";
    break;
  case 41 ... 50:
    cout << "D GRADE";
    break;
    case 31 ... 40:
    cout << "E GRADE";
    break;
  default:
    cout << " NO GRADE YOU ARE FAILED SUCCESSFULLY.";
    break;
}
}
