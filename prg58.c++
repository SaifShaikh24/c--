// Print A,C,E.....series from the number given by user
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the n: ";
    cin >> n;

    char currentChar = 'A';
    for(int i = 0; i < n; i++) {
        cout << currentChar << " ";
        currentChar += 2;
    }

    return 0;
}
