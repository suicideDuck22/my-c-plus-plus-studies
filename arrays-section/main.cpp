#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    /*
        Arrays declaration follow this basic pattern => Elements_type Array_name [Array_fixed_size] Optional:{initialize_values_separateds_by_comma}
    */
    int test_scores[5]{100, 95, 99, 65, 41};

    int high_score_per_level[10]{3, 5}; // Initialize the 3 and 5, the rest of the elements are initializeds with 0.

    const int days_in_year{365};
    double hi_temperatures[days_in_year]{0}; // Iinitialize all elements to 0.

    int another_array[]{3, 6}; // Make compiler calculate the array size.

    cout << "The name of the array is: " << another_array << endl; // Print the address on the memomry.

    int movie_rating[3][4]{
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}}; // Declaring and initializing a matrix.

    double temperatures[]{98.6, 95.2, 88.7, 100.7, 89.0};
    cout << temperatures[6] << endl;

    return 0;
}