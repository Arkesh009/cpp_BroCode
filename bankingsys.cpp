#include <bits/stdc++.h>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "*****************\n";
        cout << "Enter the choice:\n";
        cout << "*****************\n";
        cout << "1. Show balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;

        case 2:
            balance += deposit();
            break;

        case 3:

            balance -= withdraw(balance);
            break;

        case 4:
            cout << "Thankyou\n";
            break;

        default:
            cout << "Invalid Input\n";
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout << "Your Balance is " << setprecision(2) << fixed << balance << endl;
}

double deposit()
{
    double amount = 0;
    cout << "Enter deposit amount: ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Invalid amount\n";
        return 0;
    }
    return amount;
}

double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter withraw amount: ";
    cin >> amount;
    if (amount < balance)
    {
        return amount;
    }
    else
    {
        cout << "Invalid Amount:\n";
        return 0;
    }
}