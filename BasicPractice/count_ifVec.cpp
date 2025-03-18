// Implement a program that counts the number of elements greater than a given number in a vector using count_if().

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int target;

    cout << "Enter the target\n";
    cin >> target;

    // Use count_if with a lambda function to count elements greater than the target
    auto it = count_if(v.begin(), v.end(), [target](int x)
                       { return x > target; });

    cout << it;

    return 0;
}