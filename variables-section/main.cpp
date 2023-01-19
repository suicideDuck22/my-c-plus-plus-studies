#include <iostream>
using namespace std;

// Global variables are default initialized to 0, empty in case of strings.
int myGlobalVariable;
string myGlobalString;

int main(int argc, char *argv[])
{
    // Local strings are also default initialized empty on declaration.
    string myLocalString;

    cout << myGlobalVariable << endl;
    cout << myGlobalString << endl;
    cout << myLocalString << endl;

    cout << "Program to return the area of a room." << endl;
    cout << "Please inform the length of the room and the width of the room separed by space: ";

    double roomWidth{0};
    double roomLength{0};
    cin >> roomWidth >> roomLength;

    cout << "The area of the room is: " << (roomWidth * roomLength) << " square feet.";

    return 0;
}