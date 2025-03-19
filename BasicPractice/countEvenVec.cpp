// Count Even Numbers in a Vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Enter the size of array\n";
    int n;
    cin >> n;

    cout << "Enter the elements in the vec\n";
    while (n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int count = 0;
    for (auto i : v)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }

    cout << "The number of even terms in the array: " << count;

    return 0;
}