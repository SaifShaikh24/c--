// Marksheet
#include <iostream>
using namespace std;

int main()
{
    float total, per, m1, m2, m3;

    cout << "Enter the marks for subject 1: ";
    cin >> m1;

    cout << "Enter the marks for subject 2: ";
    cin >> m2;

    cout << "Enter the marks for subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    per = (total * 100) / 300;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << per << "%" << endl;

    if (per > 75)
    {
        cout << "Grade: A";
    }
    else if (per > 60 && per <= 75)
    {
        cout << "Grade: B";
    }
    else if (per > 45 && per <= 60)
    {
        cout << "Grade: C";
    }
    else
    {
        cout << "Grade: Fail";
    }

    return 0;
}
