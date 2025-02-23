#include<bits/stdc++.h>
using namespace std;

int main()
{
    // <key, value>
    // sorted order
    // unique key
   map<int, int> mp1;
   map<int, pair<int,int>> mp2;
   map<pair<int,int>, int> mp3;

   mp1[1] = 2;
   mp1.insert({2,3});
   mp1.insert({3,4});

   mp2.insert({2, {3,4}});
   mp3.emplace(make_pair(2,3), 3);

   // printing map 1
   for(auto i: mp1){
    cout << i.first << "," << i.second << "\n";
   }
   cout << "\n";
   // printing map 2
   for(auto i: mp2){
    cout << i.second.first << "\n";
   }

   return 0;
}