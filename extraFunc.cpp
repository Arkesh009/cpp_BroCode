#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 7;
    int c = __builtin_popcount(num); // it returns the set of 1's in the binary form of the parameter
    cout << c << "\n";

    //__builtin_popcount function
    long long int ln = 9298238289298;
    int cnt1 = __builtin_popcount(ln);
    cout << cnt1 << "\n";

    // next_permutaion Function
    string s = "123";
    do
    {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    // max_element function
    // min_element function
    vector<int> v2 = {9, 8, 2, 4, 1, 5};
    int m = *max_element(v2.begin(), v2.end());
    int n = *min_element(v2.begin(), v2.end());
    cout << "Maximum value in v2: " << m << "\n";
    cout << "Minimum value in v2: " << n << "\n";

    // Reverse function
    vector<int> v4 = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(v4.begin(), v4.end());
    cout << "Reversed v4: ";
    for (auto i : v4)
    {
        cout << i << " ";
    }
    cout << "\n";

    // swap function
    int a = 3, b = 5;
    swap(a, b);
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    // Min , Max function
    cout << "Maximum from a,b: " << max(a, b) << "\n";
    cout << "Minimum from a,b: " << min(a, b) << "\n";

    // binary search function
    //  works only on sorted data
    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << "Target exists: " << binary_search(v5.begin(), v5.end(), 4) << "\n";

    return 0;
}