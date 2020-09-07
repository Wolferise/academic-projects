#include <iostream>
using namespace std;

int main()
{
    int lineQuantity, columnQuantity, i, j;
    cout << "Please enter quantity of lines: ";
    cin >> lineQuantity;
    cout << "Please enter quantity of columns: ";
    cin >> columnQuantity;
    for (i = 0; i < lineQuantity; i++)
    {
        cout << endl;
        for (j = 0; j < columnQuantity; j++)
        {
            cout << "*";
        }
    }
    cout << endl;
    return 0;
}
