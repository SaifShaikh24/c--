// Electricity Bill
#include <iostream>
using namespace std;

int main() {
    int unit;
    float total;

    cout << "Enter the number of units consumed: ";
    cin >> unit;

    if (unit > 0 && unit <= 100) {
        total = 50 + (unit * 0.60);
        cout << "Your total electricity bill is " << total << endl;
    } else if (unit > 100 && unit < 300) {
        total = 50 + (unit * 0.80);
        cout << "Your total electricity bill is " << total << endl;
    } else {
        total = 50 + (unit * 0.90);
        cout << "Your total electricity bill is " << total << endl;
    }

    if (total > 300) {
        total = total * 1.15;
        cout << "with a charge: " << total << endl;
    }

    return 0;
}