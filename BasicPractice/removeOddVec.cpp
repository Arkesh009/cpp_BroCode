// Remove All Odd Numbers from a Vector

#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v = {1,2,3,4,5,6,7,8};
   cout << "The vector: ";
   for(auto i: v){
        cout << i << " ";
   }

   // remove_if does not actually remove elements from the vector, it only moves the elements that should be kept to the front of the vector and returns an iterator to the new logical end of the vector. You need to use the erase method to actually remove the elements from the vector.
   v.erase(remove_if(v.begin(), v.end(), [](int x){ return x%2 != 0;}), v.end());

   cout << "\nThe vector after removing all odd nums: ";
   for(auto i: v){
        cout << i << " ";
   }
   return 0;
}