#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Data is not stored in a liner structure
    //  its managed in a tree pattarn
    // size swap empty rest are same as stack
    priority_queue<int> pq; // this is max heap
    // Time complexity of push, pop = log(n)
    // Time complexit of top() = O(n)
    pq.push(1);
    pq.push(2);
    pq.emplace(3);

    pq.pop();                                 // pops the largest first
    cout << "Max heap: " << pq.top() << "\n"; // prints the largest first

    // mix heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);

    cout << "Mix heap: " << pq1.top() << "\n";

    return 0;
}