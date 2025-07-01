// Calculate the hypotenous of the triangle
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the sides of the triangle\n";
    cin >> a >> b;

    // square root of a^2 + b^2
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Hypotenous of the triangle = " << c;

    return 0;
}