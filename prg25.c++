// logical operator find the largest value from 3 Number 
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;

  if (a > b && a > c)
  {
    cout << "a is the largest number: " << a << endl;
  }
   else
    {
         if (b > c)
          {
            cout << "b is the largest number: " << b << endl;
         }
        else
        {
        cout << "c is the largest number: " << c << endl;
        }
  }

  return 0;
}

