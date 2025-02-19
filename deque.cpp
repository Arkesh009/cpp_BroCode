#include<bits/stdc++.h>
using namespace std;

int main()
{
   deque<int> dq;

   dq.push_back(1);
   dq.emplace_back(2);

   dq.push_front(0);
   dq.emplace_front(-1);

   cout << "Printin deque:\n";
   for(auto i: dq){
    cout << i << "\n";
   }

   dq.pop_back();
   dq.pop_front();

   cout << "Printin dq back: " << dq.back() << "\n";
   cout << "Printin dq front: " << dq.front() << "\n";
   //rest functions are the same as vectors
   //begin, end, rbegin, rend, clear, insert, size, swap
   
   return 0;
}