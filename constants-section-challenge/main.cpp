#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    const double price_per_small_room{25.0};
    const double price_per_large_room{35.0};
    const float tax_rate{0.06};
    const int estimate_expiry_in_days{30};

    cout << "Hello, welcome to Rena's Carpet Cleaning Service" << endl;
    
    cout << "\nHow many small rooms would you like cleaned? ";
    int number_of_small_rooms{0};
    cin >> number_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";
    int number_of_large_rooms{0};
    cin  >> number_of_large_rooms;

    cout << "\nEstimate for carpet cleaning service." << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    double sale_cost{(price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)};
    cout << "Cost: $" << sale_cost << endl;

    double sale_tax{sale_cost * tax_rate};
    cout << "Tax: $" << sale_tax << endl;

    cout << "Total estimate: $" << sale_cost + sale_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry_in_days << " days." << endl;

    return 0;
}