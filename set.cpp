#include<bits/stdc++.h>
using namespace std;

int main()
{
    //sorted and unique storage
    // in set everything happens in log(n) complexity
   set<int> s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(2);
   s.insert(5);
   s.insert(6);
   s.emplace(4);
   //Functionality of insert in vector can be used also, that only increases efficiency 
   // begin(), end(), rbegin(), rend(), size(), empty() and swap() are same 

   auto i1 = s.find(3); // itreator
    cout << *i1 << "\n";
   int cnt = s.count(2); // counter
   cout << cnt << "\n"; // output will be 1 or 0

   s.erase(4);// takes logrithmic time
   
   auto i2 = s.find(2);
   s.erase(i2); // takes constant time

    // {1,3,4,5,6}
   auto it1 = s.find(1);
   auto it2 = s.find(4);
   s.erase(it1, it2);// after erase {4,5,6} [first, last)

   return 0;
}