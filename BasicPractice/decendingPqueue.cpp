// Implement a priority queue that stores integers and print them in descending order using the priority_queue class.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    // input pq size
    cout << "Enter the size of pq\n";
    int n;
    cin >> n;

    // input pq elements
    cout << "Enter the elements in pq\n";
    while (n--)
    {
        int a;
        cin >> a;
        pq.emplace(a);
    }

    // print pq in decending order
    cout << "The pq in decending order: ";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}