// Print 1,2,4......16
#include <iostream>
using namespace std;

int main() {
    int i = 1, n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    while (i <= n) {
        cout << "\n" << i;
        i *= 2;
    }
    
    return 0;
}
