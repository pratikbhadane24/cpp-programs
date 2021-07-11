#include <iostream>
using namespace std;

void check_balance(double b)
{
    cout << "Your Balance is: " << b << endl;
}
void withdraw(double b, double a)
{
    cout << "How much amount you want to withdraw from your account ?" << endl;
    cin >> a;
    if (a > b)
    {
        cout << "Insufficient funds";
    }
    else
    {
        cout << "Transaction Successful!" << endl;
        cout << "New Balance is: " << b - a << endl;
    }
}
void deposit(double b, double a)
{
    cout << "How much amount you want to deposit to your account ?" << endl;
    cin >> a;
    cout << "Transaction Successful!" << endl;
    cout << "New Balance is: " << b + a << endl;
}
int main()
{
    char n;
    double balance, amount;
    cout << "Welcome!" << endl;
    cout << "Enter your balance: ";
    cin >> balance;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Select an option: " << endl;
    cout << "A. Check Balance " << endl;
    cout << "B. Withdraw Amount" << endl;
    cout << "C. Deposit Amount" << endl;
    cout << "D. Exit" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Your Choice: ";
    cin >> n;

    switch (n)
    {
    case 'A':
        check_balance(balance);
        break;
    case 'B':
        withdraw(balance, amount);
        break;
    case 'C':
        deposit(balance, amount);
        break;
    case 'D':
        cout << "Exiting..." << endl;
        break;
    default:
        cout << "Wrong Entry." << endl;
    }

    return 0;
}