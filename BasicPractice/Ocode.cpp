// Write a program to take user input for two numbers and print the larger one.
#include <bits/stdc++.h>
using namespace std;

void findmax(int, int);

int main()
{
    int a, b;
    cout << "Enter two num:";
    cin >> a >> b;
    findmax(a, b);
    return 0;
}

void findmax(int a, int b)
{
    if (a > b)
        cout << "The greater num is: " << a << "\n";
    else if (b > a)
        cout << "The greater num is: " << b << "\n";
    else
        cout << "Enter valid and different values" << "\n";
}