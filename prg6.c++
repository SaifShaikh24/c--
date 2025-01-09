// Simple Interest
#include <iostream>
using namespace std;

int main() {
    int p, r, n, si;

    cout << "Enter the amount: ";
    cin >> p;

    cout << "Enter the rate of interest: ";
    cin >> r;

    cout << "Enter the time period: ";
    cin >> n;

    si = (p * r * n) / 100;
    cout << "\nSimple interest amount is = " << si << endl;

    return 0;
}
