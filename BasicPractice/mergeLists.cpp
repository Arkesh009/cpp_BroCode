// Implement a function that merges two sorted lists into one sorted list.

#include <bits/stdc++.h>
using namespace std;

void inputFunc(list<int> &l);
list<int> mergeLists(const list<int> &l1, const list<int> &l2);

int main()
{
    list<int> l1, l2;
    int n;
    cout << "Enter the size of lists: ";
    cin >> n;

    cout << "Enter elements for the first list:\n";
    inputFunc(l1);

    cout << "Enter elements for the second list:\n";
    inputFunc(l2);

    list<int> mergedList = mergeLists(l1, l2);

    cout << "Merged list:\n";
    for (auto i : mergedList)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

void inputFunc(list<int> &l)
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
    {
        int element;
        cin >> element;
        l.push_back(element);
    }
    l.sort(); // Ensure the list is sorted
}

list<int> mergeLists(const list<int> &l1, const list<int> &l2)
{
    list<int> mergedList;
    auto it1 = l1.begin();
    auto it2 = l2.begin();

    while (it1 != l1.end() && it2 != l2.end())
    {
        if (*it1 < *it2)
        {
            mergedList.push_back(*it1);
            ++it1;
        }
        else
        {
            mergedList.push_back(*it2);
            ++it2;
        }
    }

    // Add remaining elements
    while (it1 != l1.end())
    {
        mergedList.push_back(*it1);
        ++it1;
    }

    while (it2 != l2.end())
    {
        mergedList.push_back(*it2);
        ++it2;
    }

    return mergedList;
}