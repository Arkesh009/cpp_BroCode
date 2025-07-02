// Simple calculator program

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cout << "Enter the arithemetic operation type\n";
    cin >> c;

    double a, b;
    cout << "Enter the numbers\n";
    cin >> a >> b;

    switch(c){
        case '+':
        cout << "Addition = " << a+b << "\n";
        break;
        case '-':
        cout << "Subtraction = " << a-b << "\n";
        break;
        case '*':
        cout << "Multiplication = " << a*b << "\n";
        break;
        case '/':
        cout << "Division = " << a/b << "\n";
        break;
        default:
        cout << "Invalid input\n";
    }
    return 0;
}