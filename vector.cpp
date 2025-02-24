#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1(5, 10);
    vector<int> v2(v1);
    vector<pair<int, int>> vp;

    v2.push_back(20);
    vp.emplace_back(8, 9);
    cout << "Printing element of v1\n";
    vector<int>::iterator it = v1.begin();
    it++;
    cout << *it << "\n";

    // auto keyword automatically assigns the data type according to the value
    cout << "Printing copied array v2 with additional input value\n";
    for (auto i = v2.begin(); i != v2.end(); i++)
    {
        cout << *i << "\n";
    }

    cout << "Printing array of pairs\n";
    for (auto i : vp)
    {
        cout << i.first << "," << i.second << "\n";
    }

    // Clearing v1 vector
    v1.clear();

    vector<int> v3(1, 100);
    // inserting values in v3
    v3.insert(v3.begin() + 1, 10);
    //    cout << *(v3.begin()+1);

    // copying v2 values inside v3
    v3.insert(v3.begin() + 2, v2.begin(), v2.end());
    // printin v3 after inserting v2 in it
    for (auto i : v3)
    {
        // 100,10,10,10,10,10,10,20
        cout << i << "\n";
    }

    // erasing 6 values from v3
    v3.erase(v3.begin() + 1, v3.begin() + 7);
    cout << "V3 after erasing values:\n";
    for (auto i : v3)
    {
        cout << i << "\n";
    }

    v1.push_back(99);
    v1.push_back(99);
    // swaping vectors
    v3.swap(v1);

    cout << "V3 after swaping values with v1 = 99,99:\n";
    for (auto i : v3)
    {
        cout << i << "\n";
    }

    cout << "Checking if v1 is empty: " << v1.empty() << "\n";

    cout << "value at index 2: " << v2[1] << " " << v2.at(1) << "\n";

    cout << "value at front and back of v3: " << v3.front() << " " << v3.back() << "\n";

    return 0;
}