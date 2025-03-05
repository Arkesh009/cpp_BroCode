// Implement a function that removes all occurrences of a specific value from a vector.

#include<bits/stdc++.h>
using namespace std;

void removeOccurance(vector<int> &, int target);
int main()
{
   vector<int> v;
   cout << "Enter the vector size\n";
   int n;
   cin >> n;

   cout << "Enter vector elements\n";
   for(int i=0; i<n; i++){
        int input;
        cin >> input;
        v.push_back(input);
   }

   cout << "\nEnter the target: ";
   int target;
   cin >> target;
  
   removeOccurance(v, target);
   cout << "Vector after removing target\n";
   for(auto i: v){
    cout << i << " ";
   }
   return 0;
}

void removeOccurance(vector<int> &v, int target){
    v.erase(find(v.begin(), v.end(), target), v.end());
}