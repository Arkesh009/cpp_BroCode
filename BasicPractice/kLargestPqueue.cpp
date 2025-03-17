// Solve the problem of finding the k largest elements in an array using a priority_queue.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2,5,7,6,3,4,1,8};
    priority_queue<int> pq;

    for(auto i: v){
        pq.emplace(i);
    }

    cout << "Enter the number of largest element to print\n";
    int n;
    cin >> n;

    cout << "The " << n << " largest elements of the array: ";
    while(n--){
        cout << pq.top() << " ";
        pq.pop();
    }
    
   return 0;
}