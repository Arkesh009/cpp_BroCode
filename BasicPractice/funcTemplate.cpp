// Write a function template that returns the maximum of two values.

#include <bits/stdc++.h>
using namespace std;

// function template
template <typename U, typename V>

auto mx(U a, V b)
{
    return a > b ? a : b;
}

int main()
{
    int a;
    double b;
    cout << "Enter two num\n";
    cin >> a >> b;
    cout << mx(a, b);
    return 0;
}