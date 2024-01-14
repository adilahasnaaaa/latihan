/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int bilangan;
    
    cout<<"masukan bilangan : ";
    cin>>bilangan;
    
    if (bilangan % 2 == 0) {
       cout << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl;
    }

    return 0;
}
