#include <iostream>
using namespace std;

int main() {
    int position, optionsQuantity, optionToSolve;
    cout << "Please enter your list position: ";
    cin >> position;
    cout << "Please enter quantity of test options: ";
    cin >> optionsQuantity;
    optionToSolve = position % optionsQuantity;
    cout << "Your test option to solve is: " << optionToSolve << endl;
    return 0;
}
