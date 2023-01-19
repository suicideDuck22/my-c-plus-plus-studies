#include <iostream>

// Define wich namespace use.
using namespace std;

/* Can be used by single name, as:
using std::cout;
using std::cin;
using std::endl;
*/

int main(int argc, char *argv[])
{
    int input_number;
    int num1, num2;
    double real_number;

    cout << "Hello from my first test project." << endl;

    cout << "Enter a number between 1 and 100: ";
    cin >> input_number;

    cout << "Amazing!! " << input_number << " is my favorite number too!" << endl;

    /*
        It works, because when cin read the buffer searching for a int (Variable type), him read just until reach the space and storage this first number here in the num1.
        On read again to store the num2, already have values on buffer, so put this value on num2, instead ask again for another number.
    */
    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;
    cout << "You entender " << num1 << " and " << num2 << endl;

    cout << "Now, please type a double: ";
    cin >> real_number;
    cout << "You entered the number " << real_number;

    return 0;
}