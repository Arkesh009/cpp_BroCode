// Write a program to simulate a queue in a supermarket where customers are served in a First-Come, First-Serve (FCFS) manner.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    cout << "Enter the number of people in the queue\n";
    int n;
    cin >> n;

    cout << "Enter the names of the customers lined up in the queue\n";
    do
    {
        string s;
        getline(cin, s);
        q.emplace(s);
    } while (n--);

    cout << "The order of the FCFS: ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}