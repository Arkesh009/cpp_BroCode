// Implement a queue using queue to reverse the first k elements of a queue.

#include<bits/stdc++.h>
using namespace std;

int main()
{
   queue<int> q;
   vector<int> v;

   cout << "Enter the size of queue\n";
   int n;
   cin >> n;

   cout << "Enter the elements of queue\n";
   while(n--){
        int a;
        cin >> a;
        q.emplace(a);
   }

   cout << "Enter the number of terms you wanna reverse\n";
   int x;
   cin >> x;
   int size = q.size()-x;
   while(x--){
        v.push_back(q.front());
        q.pop();
   }

   reverse(v.begin(), v.end());

   for(auto i: v){
        cout << i << " ";
   }


   return 0;
}