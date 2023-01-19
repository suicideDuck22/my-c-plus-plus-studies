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
    cout << "Hello from my first test project." << endl;

    cout << "Enter a number between 1 and 100: ";
    cin >> input_number;

    cout << "Amazing!! " << input_number << " is my favorite number too!" << endl;
    return 0;
}