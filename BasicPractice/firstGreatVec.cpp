// Find the First Element Greater Than a Target

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Enter the target\n";
    int target;
    cin >> target;

    cout << "The num just greater than the target: ";
    auto m = max(v.begin(), v.end());

    for (auto i : v)
    {
        if (i > target)
        {
            cout << i;
            return 0;
        }
    }


    return 0;
}