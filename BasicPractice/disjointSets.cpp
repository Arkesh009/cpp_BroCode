// Write a program that checks if two sets are disjoint (have no common elements).

#include<bits/stdc++.h>
using namespace std;

bool disjoint(set<int>&, set<int>&);

int main()
{
   set<int> s1, s2;
   int n1, n2;
   cout << "Enter the size of s1\n";
   cin >> n1;

   cout << "Enter the elements of s1\n";
   while(n1--){
        int term;
        cin >> term;
        s1.insert(term);
   }

   cout << "Enter the size of s2\n";
   cin >> n2;

   cout << "Enter the elements of s2\n";
   while(n2--){
        int term;
        cin >> term;
        s2.insert(term);
   }

   if(disjoint(s1,s2)){
        cout << "Sets are disjoint\n";
   }
   else{
        cout << "There is/are common elements in the sets\n";
   }
   
   return 0;
}

bool disjoint(set<int>& st1, set<int>& st2){
    for(auto i: st1){
        for(auto j: st2){
            if(i==j){
                return false;
            }
        }
    }
    return true;
}