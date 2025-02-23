#include<bits/stdc++.h>
using namespace std;

int main()
{
    // unsorted
    // but unique
    //rest are same
   unordered_map<int,int> unmp;
   unmp.insert({5,1});
   unmp.insert({2,2});
   unmp.insert({3,3});

   for(auto i: unmp){
    cout << i.second << "\n";
   }

   return 0;
}