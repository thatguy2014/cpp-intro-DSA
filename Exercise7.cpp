#include <iostream>
using namespace std;

int main()
{
    int i, j, rows;
    cout << "\n\n Display a right triangle pattern using asterisks \n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin  >> rows;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= rows; j++)
            cout << "*";
	    cout << endl;
    }	
}