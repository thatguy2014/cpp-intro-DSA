#include <iostream>
using namespace std;

int main()
{
    int num1, factorial;
    cout << "\n\n Find the factorial of a number\n";
    cout << "------------------------------------\n";
    cout << " Input a positive number to find the factorial: ";
    cin >> num1;
    for(int a; a < num; a++)
    {
        factorial = factorial * a;
    }
    cout << " The factorial of the given number is: " << factorial << endl;
    return 0;
}