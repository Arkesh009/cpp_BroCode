#include<bits/stdc++.h>
using namespace std;

int main()
{
   multiset<int> ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);
   ms.insert(2);
   ms.insert(2);

   int cnt = ms.count(1);
   cout << "Count of 1 is: " << cnt << "\n";

   ms.erase(2); // erases all the occurances of 2
   ms.erase(ms.find(1)); //erase only single occurance of 1

   cout << *ms.begin();
   
   return 0;
}