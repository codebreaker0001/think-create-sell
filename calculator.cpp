#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for multiplication\nEnter 4 for division"<< endl;
    cin >> choice;

    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    switch (choice)
    {
        case 1:
            cout << a<< " + " << b << " = " << a+b << endl;
            break;
        case 2:
            cout << a<< " - " << b << " = " << a-b << endl;
            break;
        case 3:
            cout << a<< " x " << b << " = " << a*b << endl;
            break;
        case 4:
            cout << a<< " / " << b << " = " << a/b << endl;
            break;
        default:
            cout << "Invalid Choice! " << endl;
    }
    return 0;
}