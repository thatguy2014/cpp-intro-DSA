#include <iostream>
using namespace std;
 
int main() 
{
   int num = 57;      
   cout << "\n\n Display the operation of pre and post increment and decrement \n";
   cout << "--------------------------------------------------------------------\n";    
   cout <<" The number is : " << num << endl;               
   cout <<" Executing post increment in a statement: num = " << num++ << endl; 
   cout <<"   does not increment until after the statement: num = " << num << endl;
   cout <<" Executing pre increment in a statement: num = " << ++num << endl;             
   cout <<"   increments before the statement: num = " << num << endl; 
   num =+ 1; // Can you fix this line? If so, write it in the blanks below
   cout <<" After the shorthand code for num = num + 1; num = " << num << endl; 
   cout <<" Post-decrement is the same as post-increment: num = " << num-- << endl;
   cout <<"   does not decrement until after the statement: num = " << num << endl;
   cout <<" Pre-decrement is the same as pre-increment: num = " << --num << endl;
   num =- 1; // Can you fix this line? If so, write it in the blanks below
   cout <<" After the shorthand code for num = num - 1; num = " << num << endl; 
}