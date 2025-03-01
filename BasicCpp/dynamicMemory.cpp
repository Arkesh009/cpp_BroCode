#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = NULL;
    p = new int[10];

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Iteration Number: " << p[i] << '\n';
    }

    delete[] p;

    return 0;
}