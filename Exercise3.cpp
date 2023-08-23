#include <iostream>
using namespace std;

int main()
{
    int rad1;
    float volsp;
    cout << "\n\n Calculate the volume of a sphere \n";
    cout << "---------------------------------------\n";		
    cout << " Input the radius of a sphere: ";
    cin >> rad1;
    /*
       Volume of a sphere is (4/3) x pi x r^3
    */
    volsp = (4 x 3.14 x rad1 x rad1 x rad1) / 3;
    cout << " The volume of the sphere is: "<< volsp << endl;
    cout << endl;
    return 0;    
}
