#include<bits/stdc++.h>
using namespace std;

int main()
{
   priority_queue<int> pq;
   pq.push(1);
   pq.push(2);
   pq.emplace(3);

   pq.pop();
   cout << pq.top();
   
   return 0;
}