#include<bits/stdc++.h>
using namespace std;

template <typename T, typename U>
auto maxValue(T x, U y){
    return (x>y) ? x : y; //used ternery operator bcz, its necessory to put the diff types of return value in single return statement
}

int main()
{
   int x;
   double y;

   cout << "Enter two num: ";
   cin >> x >> y;

   cout << maxValue(x,y);

   return 0;
}