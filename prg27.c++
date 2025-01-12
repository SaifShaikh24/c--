// voting

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the age: ";
    cin >> a;

    if (a >= 18) {
        cout << "Eligible to vote: " << a << endl;
    } else {
        cout << "Not eligible to vote: " << a << endl;
    }

    return 0;
}
