#include <iostream>
using namespace std;

int main() {
  double RATE = 0.75; // 75 cents per year
    int age1, age2;
    double allowance1, allowance2;

    cout << "Enter age of child 1: ";
    cin >> age1;
    cout << "Enter age of child 2: ";
    cin >> age2;

    allowance1 = age1 * RATE;
    allowance2 = age2 * RATE;

    cout << "Allowance for child 1: $" << allowance1 << endl;
    cout << "Allowance for child 2: $" << allowance2 << endl;
    return 0;
}