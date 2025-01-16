// Assign x or y value

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the x: ";
    cin >> x;
    cout << "Enter the y: ";
    cin >> y;

    if (x < 2000 || x > 3000)
    {
        cout << " x";
    }

    if (y >= 100 && y <= 500)
    {
        cout << " y";
    }

    return 0;
}
