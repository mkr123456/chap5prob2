// chap5prob2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int rad1, hgt;
    float volcy;
    cout << "\n\n Calculate the volume of a cylinder :\n";
    cout << "-----------------------------------------\n";
    cout << " Input the radius of the cylinder : ";
    cin >> rad1;
    cout << " Input the height of the cylinder : ";
    cin >> hgt;
    volcy = (3.14 * rad1 * rad1 * hgt);
    cout << " The volume of the cylinder is : " << volcy << endl;
    cout << endl;

    return 0;


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
