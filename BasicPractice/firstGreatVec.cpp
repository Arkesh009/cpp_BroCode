// Find the First Element Greater Than a Target

#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v = {1,2,3,4,5,6,7,8};
    int target = 3;
   for(auto i: v){
        if(i>target){
            cout << i;
            break;
            
        }
   }
   return 0;
}