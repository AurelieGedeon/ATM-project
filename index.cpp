#include <string>
#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "*************************" << endl;
}

int main()
{
    int option;

    showMenu();
    cout << "Option: ";
    cin >> option;
}