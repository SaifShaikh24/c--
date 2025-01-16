// Electricity Bill 
#include <iostream>
using namespace std;

int main()
{
    int unit;
    float total;
    cout << "Enter the unit: ";
    cin >> unit;

    if (unit > 0 && unit <= 100)
    {
        total = 50 + (unit * 0.60);
        cout << "Total electricity bill: " << total;
    }
    else if (unit > 100 && unit < 300)
    {
        total = 50 + (unit * 0.80);
        cout << "Total electricity bill: " << total;
    }
    else
    {
        total = 50 + (300 * 0.80);
        cout << "Total electricity bill: " << total;
    }

    if (total > 300)
    {
        total = total * 1.15;
        cout << "\nWith surcharge: " << total;
    }

    return 0;
}
