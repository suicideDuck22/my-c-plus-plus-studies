#include <iostream>
/*
    This header define the size of any integral types.
    To be used with sizeof operator.
*/
#include <climits>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Size of informations" << endl;
    cout << "============Integral types=============" << endl;

    /*
        Intergral types.
    */
    cout << "Char: " << sizeof(char) << " bytes." << endl;
    cout << "Int: " << sizeof(int) << " bytes." << endl;
    cout << "Unsigned int: " << sizeof(unsigned) << " bytes." << endl;
    cout << "Shot: " << sizeof(short) << " bytes." << endl;
    cout << "Long: " << sizeof(long) << " bytes." << endl;
    cout << "Long Long: " << sizeof(long long) << " bytes." << endl;

    cout << "============Floating point types=============" << endl;

    /*
        Floating point types.
    */
    cout << "Float: " << sizeof(float) << " bytes." << endl;
    cout << "Double: " << sizeof(double) << " bytes." << endl;
    cout << "Long double: " << sizeof(long double) << " bytes." << endl;
}