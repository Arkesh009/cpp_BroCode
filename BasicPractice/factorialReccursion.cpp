// Write a function to calculate the factorial of a number using recursion.
#include <bits/stdc++.h>
using namespace std;

int fact(int a);

int main()
{
    int num;
    cout << "Enter the num\n";
    cin >> num;
    cout << "Factorial of num: " << fact(num) << "\n";
    return 0;
}

int fact(int a)
{
    if (a <= 1)
        return 1;
    return a * fact(a - 1);
}