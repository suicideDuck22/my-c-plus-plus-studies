#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Elements of vector1: " << vector1.at(0) << " | " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Elements of vector2: " << vector2.at(0) << " | " << vector2.at(1) << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements presents on vector_2d before vector1 change" << endl;
    cout << vector_2d.at(0).at(0) << " | " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " | " << vector_2d.at(1).at(1) << endl;

    // Vector matrix stay the same, because the copy sended to him is a true cop, not a reference.
    vector1.front() = 1000;

    cout << "Elements presents on vector_2d after vector1 change: " << endl;
    cout << vector_2d.at(0).at(0) << " | " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " | " << vector_2d.at(1).at(1) << endl;

    cout << "New element of vector1: " << vector1.at(0) << " | " << vector1.at(1) << endl;
}