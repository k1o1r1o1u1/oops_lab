/*
Define a class BANK_ACCOUNT with data members for account number, account
holder name, balance, interest, and final balance.
Include member functions to read account details, calculate interest, and display the
final balance.Write a C++ program to read the details of N account holders and
compute the final balance, where:
- Interest = 5% of balance
- Final Balance = Balance + Interest
Display the details of all account holders.
*/

#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    int acc_no, balance, interest, final_balance;

public:
    void getData();
    void calculate();
    void display();
};
void BankAccount::getData()
{
    cout << "Enter account number: ";
    cin >> acc_no;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Balance: ";
    cin >> balance;
}
void BankAccount::calculate()
{
    interest = 0.05 * balance;
    final_balance = balance + interest;
}
void BankAccount::display()
{
    calculate();
    cout << "Account number: " << acc_no << endl;
    cout << "Account Holder Name: " << name << endl;
    cout << "Balance: " << balance << endl;
    cout << "Interest: " << interest << endl;
    cout << "Final Balance: " << final_balance << endl;
}

int main()
{
    BankAccount b[50];
    int n = 0;
    cout << "Enter the number of account holders: ";
    cin >> n;

    cout << "Enter the Details of " << n << " Account Holders: \n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nAccount Holder " << i + 1 << endl;
        b[i].getData();
    }

    cout << "\n---------------------------------------------\n";
    cout << "The details of " << n << " Account Holders are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nAccount Holder " << i + 1 << endl;
        b[i].display();
    }

    return 0;
}