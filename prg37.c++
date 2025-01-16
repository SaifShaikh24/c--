// check entered character is uppercase or lowercase
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "\nCharacter is uppercase: " << ch<< endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "\nCharacter is lowercase: " << ch<< endl;
    }
    else
    {
        cout << "\nInvalid input. Please enter an alphabet character." << endl;
    }

    return 0;
}
