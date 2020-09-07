#include <iostream>
using namespace std;

int main() {
    int optionsQuantity, optionToSolve;
    char studentSurname[31];
    cout << "Please enter your second name (up to 30 characters): ";
    cin >> studentSurname;
    cout << "Please enter quantity of test options: ";
    cin >> optionsQuantity;
    optionToSolve = studentSurname[0] % optionsQuantity;
    cout << "Your test option to solve is: " << optionToSolve << endl;
    return 0;
}

