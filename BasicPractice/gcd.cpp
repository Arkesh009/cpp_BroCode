// Write a program to find the GCD of two numbers using a function.

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter two num\n";
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " = " << gcd(a, b);

    return 0;
}