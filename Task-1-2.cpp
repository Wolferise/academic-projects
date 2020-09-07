#include <iostream>
using namespace std;

int main() {
    int optionsQuantity, optionToSolve;
    char studentName[21];
    cout << "Please enter your name (up to 20 characters): ";
    cin >> studentName;
    cout << "Please enter quantity of test options: ";
    cin >> optionsQuantity;
    optionToSolve = studentName[0] % optionsQuantity;
    cout << "Your test option to solve is: " << optionToSolve << endl;
    return 0;
}
