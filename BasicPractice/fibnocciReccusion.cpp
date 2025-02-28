// Write a recursive function to print the Fibonacci sequence up to n terms.
#include <bits/stdc++.h>
using namespace std;
// function declaration
int fib(int num);

int main()
{
    int num;
    cout << "Enter number of terms:\n";
    cin >> num;
    cout << "Fibnocci series upto " << num << " terms:\n";
    for (int i = 1; i <= num; i++)
    { // this call fib() function for each term and prints it
        cout << fib(i) << " ";
    }
    return 0;
}

int fib(int num)
{ // first term in series is 0
    if (num == 1)
    {
        return 0;
    }
    // second and third terms are 1
    else if (num == 2 || num == 3)
    {
        return 1;
    }
    // nth term = (n-1)th term + (n-2)th term
    else
    {
        return fib(num - 1) + fib(num - 2);
    }
}