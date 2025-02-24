#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 7;
    int c = __builtin_popcount(num); // it returns the set of 1's in the binary form of the parameter
    cout << c << "\n";

    long long int ln = 9298238289298;
    int cnt1 = __builtin_popcount(ln);
    cout << cnt1 << "\n";

    string s = "123";
    do
    {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));

    vector<int> v2 = {9, 8, 2, 4, 1, 5};
    int m = *max_element(v2.begin(), v2.end());
    cout << m << "\n";

    return 0;
}