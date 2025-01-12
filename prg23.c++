// Number is Positive, Negative Or Zero
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter the a:";
    cin >> a;

    if (a == 0)
    {
        cout << "number is zero " << a;
    }
    else if (a > 0)
    {
        cout << "number is positive " << a;
    }
    else
    {
        cout << "number is negative " << a;
    }
    return 0;
}
