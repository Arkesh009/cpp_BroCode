// Solve the problem of finding the k largest elements in an array using a priority_queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // dynamic array & pq declaration
    vector<int> v = {2, 5, 7, 6, 3, 4, 1, 8};
    priority_queue<int> pq;

    // pushing array inside pq
    // pq is automatically sorted structure
    // puts larger value above the smaller
    for (auto i : v)
    {
        pq.emplace(i);
    }

    // input the demand
    cout << "Enter the number of largest element to print\n";
    int k;
    cin >> k;

    // check if k is valid
    if (k > pq.size() || k <= 0)
    {
        cout << "Invalid input";
        return -1;
    }

    // printing the k largest elements
    cout << "The " << k << " largest elements of the array: ";
    while (k--)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}