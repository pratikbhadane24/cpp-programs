#include <iostream>
using namespace std;

void check_balance(double b)
{
    cout << "Your Balance is: $" << b << endl;
}
void withdraw(double b, double a)
{
    cout << "Enter the amount you want to withdraw from your account: $";
    cin >> a;
    if (a > b)
    {
        cout << "Insufficient funds";
    }
    else
    {
        cout << "Transaction Successful!" << endl;
        cout << "New Balance is: $" << b - a << endl;
    }
}
void deposit(double b, double a)
{
    cout << "Enter the amount you want to deposit to your account: $";
    cin >> a;
    cout << "Transaction Successful!" << endl;
    cout << "New Balance is: $" << b + a << endl;
}
int main()
{
    char n;
    double balance, amount;
    cout << "Welcome!" << endl;
    cout << "Enter your balance: $";
    cin >> balance;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Select an option: " << endl;
    cout << "1. Check Balance " << endl;
    cout << "2. Withdraw Amount" << endl;
    cout << "3. Deposit Amount" << endl;
    cout << "4. Exit" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Your Choice: ";
    cin >> n;

    switch (n)
    {
    case '1':
        check_balance(balance);
        break;
    case '2':
        withdraw(balance, amount);
        break;
    case '3':
        deposit(balance, amount);
        break;
    case '4':
        cout << "Exiting..." << endl;
        break;
    default:
        cout << "Wrong Entry." << endl;
    }

    return 0;
}
