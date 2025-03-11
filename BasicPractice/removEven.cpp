// Write a program to input n integers into a list, and then remove all even numbers from the list.

#include <bits/stdc++.h>
using namespace std;

void removeEven(list<int> &);

int main()
{
    list<int> l;
    cout << "Enter the size of list\n";
    int size;
    cin >> size;

    cout << "Enter the elements in the list\n";
    // input list
    while (size--)
    {
        int n = 0;
        cin >> n;
        l.push_back(n);
    }
    // call function
    removeEven(l);

    cout << "The list of only odd numbers = ";
    for (auto i : l)
    {
        cout << i << " ";
    }

    return 0;
}

// function defination
void removeEven(list<int> &l)
{
    for (auto i = l.begin(); i != l.end();)
    {
        if (*i % 2 == 0)
        {
            i = l.erase(i); // erase returns the next itrator
        }
        else
        {
            i++;
        }
    }
}