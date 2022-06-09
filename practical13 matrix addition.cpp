#include <iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	string NAME ="AMAN,20/UBS/010\n";
	       cout<<NAME<<endl;
    int r, c, a[10][10], b[10][10], sum[10][10], i, j;

            cout << "Please enter the number of rows (between 1 and 10): ";
    cin >> r;

            cout << "Please enter the number of columns (between 1 and 10): ";
    cin >> c;

          cout << endl << "Please enter the elements of 1st matrix: " << endl;  
	// Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Please enter the element of matrix a" << i + 1 << j + 1 << " : ";
    cin >> a[i][j];
       }

             // Storing elements of second matrix entered by user.
            cout << endl << "Please enter the elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Please enter the element of matrix b" << i + 1 << j + 1 << " : ";
    cin >> b[i][j];
       }
             // Adding Two matrices
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

           cout << endl << "Hence,the Sum of your both matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        } return 0;
}
