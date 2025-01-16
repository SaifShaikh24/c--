// Tax Calculation
#include <iostream>
using namespace std;

int main()
{
    float income, tax;

    cout << "Enter the income: ";
    cin >> income;

    if (income <= 2500)
    {
        tax = 0;
        cout << "\nTax to pay: " << tax;
    }
    else if (income > 2500 && income < 5000)
    {
        tax = 0.1 * (income - 2500);
        cout << "\nTax to pay: " << tax;
    }
    else if (income >= 5000 && income < 10000)
    {
        tax = 0.1 * (5000 - 2500) + 0.2 * (income - 5000);
        cout << "\nTax to pay: " << tax;
    }
    else if (income >= 10000)
    {
        tax = 0.1 * (5000 - 2500) + 0.2 * (10000 - 5000) + 0.3 * (income - 10000);
        cout << "\nTax to pay: " << tax;
    }

    return 0;
}
