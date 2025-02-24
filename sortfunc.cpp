#include<bits/stdc++.h>
using namespace std;

//creating a comparator for implementing special sorting
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

int main()
{
   vector<int> v = {5,2,1,4,3};
   vector<int> v1(v);
    //sorting in ascending order
   sort(v1.begin(), v1.end());

   cout << "Sorted v1 in ascending: ";
   for(auto i:v1){
    cout << i << " ";
   }
   cout << "\n";
 
   //sorting in decending order
   sort(v1.begin(), v1.end(), greater<int>());// greater<int> is an inbuilt comparator/functor
   cout << "Sorted v1 in decending: ";
   for(auto i:v1){
    cout << i << " ";
   }
   cout << "\n";

   //sorting it according to the second element
   // if second element is same, then sort
   // it according to the first element but in decending order
   pair<int,int> p[] = {{1,2}, {2,1}, {4,1}};
   sort(p, p+3, comp);

   for(auto i: p){
    cout << i.first << "," << i.second << "\n";
   }

   return 0;
}