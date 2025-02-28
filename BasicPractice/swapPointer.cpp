// Write a program to swap two numbers using pointers.

#include <bits/stdc++.h>
using namespace std;

void s(int *, int *);

int main()
{
    // input values
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;

    // call swap function
    s(&a, &b);

    // print swaped values
    cout << "Swaped values = " << a << " " << b << "\n";

    return 0;
}

// swapping function
void s(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}