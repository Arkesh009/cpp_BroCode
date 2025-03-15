// Create a doubly linked list of integers using list and perform insertions and deletions at both ends.

#include <bits/stdc++.h>
using namespace std;

void pushFront(list<int> &, int n);
void pushBack(list<int> &, int n);
void popFront(list<int> &);
void popBack(list<int> &);

int main()
{
    list<int> dl;

    cout << "-----------------\n";
    cout << "1. Push Front\n2. Push Back\n3. Pop Front\n4. Pop back\n0. Exit\n";

    for (int a = true; a != 0;)
    {
        cout << "Select an option\n";
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Enter the element: ";
            int i;
            cin >> i;
            pushFront(dl, i);
        }
        else if (option == 2)
        {
            cout << "Enter the element: ";
            int i;
            cin >> i;
            pushBack(dl, i);
        }
        else if (option == 3)
        {
            cout << "One element poped from front\n";
            popBack(dl);
        }
        else if (option == 4)
        {
            cout << "One element poped from back\n";
            popBack(dl);
        }
        else if (option == 0)
        {
            cout << "The final list is:\n";
            break;
        }
        else
        {
            cout << "Invalid input\n";
        }
    }

    for (auto i : dl)
    {
        cout << i << " ";
    }

    return 0;
}

void pushFront(list<int> &dl, int n)
{

    dl.push_front(n);
}

void pushBack(list<int> &dl, int n)
{

    dl.push_back(n);
}

void popFront(list<int> &dl)
{

    dl.pop_front();
}

void popBack(list<int> &dl)
{

    dl.pop_back();
}