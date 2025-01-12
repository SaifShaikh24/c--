// Calculation of HRA & DA
#include <iostream>
using namespace std;

int main()
{
    float salary, hra, da, total;

    cout << "Enter the salary: ";
    cin >> salary;

    if (salary <= 5000)
    {
        hra = (salary * 8) / 100;
        da = (salary * 20) / 100;
    }
    else if (salary >= 5000 && salary < 10000)
    {
        hra = (salary * 12) / 100;
        da = (salary * 30) / 100;
    }
    else if (salary >= 10000 && salary < 15000)
    {
        hra = (salary * 15) / 100;
        da = (salary * 40) / 100;
    }
    else
    {
        hra = (salary * 20) / 100;
        da = (salary * 50) / 100;
    }

    total = salary + hra + da;

    cout << "HRA: " << hra << "\nDA: " << da << "\nTotal salary: " << total;

    return 0;
}
