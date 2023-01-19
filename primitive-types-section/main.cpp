#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    /*
        Character type.
    */
    char myLocalChar{'J'}; // Chars use single quotes.
    cout << "My local char is: " << myLocalChar << endl;

    /*
        Integer types.
    */

    unsigned short int examScore{55};
    cout << "My exam score is: " << examScore << endl;

    int countriesRepresented{65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting." << endl;

    long amountOfPeopleInFlorida{20610000};
    cout << "The are about " << amountOfPeopleInFlorida << " of peoples living in Florida." << endl;

    /*
        If you initialize a variable on C style (name = value), the overflow throws an warning, and restart the count of the number.
        But declaring using (name{value}), compiler will throw an error on compilation time.
    */
    long long amoutOfPeopleOnEarth{7'600'000'000};
    cout << "There are about " << amoutOfPeopleOnEarth << " of peoples on earth." << endl; // C++14, allows to use tick marks (') to strips numbers.

    long long distanceToAlphaCentauri{9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometers." << endl;

    /*
        Floating point types.
    */
    float myCarPayment{401.23};
    cout << "My car payment amount is $" << myCarPayment << "." << endl;

    double pi{3.14159};
    cout << "PI here is: " << pi << endl;

    long double largeAmount{2.7e120};
    cout << largeAmount << " is a very long number." << endl;

    /*
        Boolean type.
    */
    bool isGameOver{false};
    cout << "Is game over? " << isGameOver << endl; // Print 0 if false, and 1 if true.

    /*
        Overflow example.
    */
    short value1{30000};
    short value2{1000};
    short product{value1 * value2};

    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;

    return 0;
}