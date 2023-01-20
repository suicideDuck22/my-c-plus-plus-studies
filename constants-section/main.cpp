#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    const double price_per_room{30.0};
    const float tax_rate{0.06};
    const int estimate_expiry_in_days{30};

    cout << "Hello, welcome to Rena's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";
    
    int number_of_rooms{0};

    cin  >> number_of_rooms;

    cout << "\nEstimate for carpet cleaning service." << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;

    double sale_cost{price_per_room * number_of_rooms};
    cout << "Cost: $" << sale_cost << endl;

    double sale_tax{sale_cost * tax_rate};
    cout << "Tax: $" << sale_tax << endl;

    cout << "Total estimate: $" << sale_cost + sale_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry_in_days << " days." << endl;

    return 0;
}