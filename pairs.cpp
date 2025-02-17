#include<bits/stdc++.h>
using namespace std;

void pairFunc(int , int);

int main()
{
    int a, b;
   cout << "Enter two numbers you wanna pair up: ";
   cin >> a >> b;

   cout << "Pair formed is: ";
   pairFunc(a,b);

   return 0;
}

void pairFunc(int x, int y){
    pair<int,int> p;
    p.first = x;
    p.second = y;

    cout << "{" << p.first << ", " << p.second << "}";
}