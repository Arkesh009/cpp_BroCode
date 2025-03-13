// Implement a double-ended queue (deque) where you can add/remove elements from both the front and back.

#include<bits/stdc++.h>
using namespace std;

int main()
{
   deque<int> d;

   d.push_back(2);
   d.push_back(3);
   d.push_back(4);
   d.push_back(5);
   d.emplace_front(1);
   d.push_front(0);

   for(auto i: d){
        cout << i << " ";
   }
   cout << "\n";

   d.pop_back();
   d.pop_front();

   for(auto i: d){
    cout << i << " ";
}
cout << "\n";

   return 0;
}