#include <iostream>
using namespace std;

int main() {
    int a_distance_b, b_distance_c, weight;
    cout << "Enter the distance between A and B (km): ";
    cin >> a_distance_b;
    cout << "Enter the distance between B and C (km): ";
    cin >> b_distance_c;
    cout << "Enter the weight of the object (kg): ";
    cin >> weight;

    const int max_fuel_capacity = 300;
    int consumption = 0; // Initialize consumption to a default value

    if (weight <= 500) {
        consumption = 1;
    }
    else if (weight > 500 && weight <= 1000) {
        consumption = 4;
    }
    else if (weight > 1000 && weight <= 1500) {
        consumption = 7;
    }
    else if (weight > 1500 && weight <= 2000) {
        consumption = 9;
    }
    else {
        cout << "\033[1;31mOVERLOAD!!!\033[0m" << endl;
        return 1;
    }

    double fuel_a_to_b = a_distance_b * consumption;
    double fuel_b_to_c = b_distance_c * consumption;

    if (fuel_a_to_b > max_fuel_capacity || fuel_b_to_c > max_fuel_capacity) {
        cout << "\033[1;31mSmall tank capacity!!!\033[0m" << endl;
    }
    else {
        double remaining_fuel_after_a_to_b = max_fuel_capacity - fuel_a_to_b;
        double refuel_needed = fuel_b_to_c - remaining_fuel_after_a_to_b;

        if (refuel_needed > 0) {
            cout << "\033[1;32m" << refuel_needed << " liters of fuel need to be refilled.\033[0m" << endl;
        }
        else {
            cout << "\033[1;32mNo refueling needed.\033[0m" << endl;
        }
    }

    return 0;
}
