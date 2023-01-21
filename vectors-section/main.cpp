#include <iostream>
#include <vector> //Import vector, but it is inside the standard library namespace.

using namespace std;

/*
    vector<double> (365, 80.0). Declare a vector with 365 positions, and initialize all them with 80.0;
*/
int main(int argc, char *argv[])
{
    vector<int> test_vector{100, 60, 80, 99};

    // method "at" is used to access an especific index.
    cout << "First element of the vector: " << test_vector.at(0) << endl;

    // method "front" is used to access the first index of the vector.
    cout << "First element of the vector using a method: " << test_vector.front() << endl;

    // Can be used to assign a new value too.
    test_vector.at(0) = 10;
    cout << "New first element of the vector is: " << test_vector.at(0) << endl;

    // method "back" is used to access last element of the vector.
    cout << "Last element of the vector: " << test_vector.back() << endl;

    // method "push_back" add an element at the end of the vector.
    test_vector.push_back(55);
    cout << "Not, the last element of the vector is: " << test_vector.back() << endl;

    // method "size" return the quantity of elements inside my vector.
    cout << "At the moment I have " << test_vector.size() << " element at my vector." << endl;

    // Declaring a vector matrix.
    vector<vector<int>> movie_rating{
        {1, 2, 3, 4},
        {1, 2, 3, 3},
        {1, 3, 2, 4}};

    // Accessing first element using array syntax.
    cout << movie_rating[0][3] << endl;

    // Accessing first element using vector syntax.
    cout << movie_rating.at(0).at(3) << endl;

    return 0;
}