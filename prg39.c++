// Postfix and Prefix Increment
#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Postfix Increment:\n";
    cout << "\n1. " << a;
    cout << "\n2. " << a++;
    cout << "\n3. " << a << endl;

    cout << "\nPrefix Increment:\n";
    cout << "\n1. " << a;
    cout << "\n2. " << ++a;
    cout << "\n3. " << a << endl;

    return 0;
}
