// Write a recursive function to print the Fibonacci sequence up to n terms.
#include <bits/stdc++.h>
using namespace std;

int fib(int num);

int main()
{
    int num;
    cout << "Enter number of terms:\n";
    cin >> num;
    cout << "Fibnocci series upto " << num << " terms:\n";
    for (int i = 1; i <= num; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}

int fib(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2 || num == 3)
    {
        return 1;
    }
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}