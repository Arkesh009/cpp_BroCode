// Use find() to search for a specific element in a vector and print its index.

#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v = {1,2,3,4,5,6,7,8};

   cout << "Enter the element bw 1 to 8 to find its index\n";

   int n;
   cin >> n;

   auto a = find(v.begin(), v.end(), n);
   cout << "The index = " << *a;

   return 0;
}