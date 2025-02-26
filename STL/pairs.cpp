#include<bits/stdc++.h>
using namespace std;

void pairFunc(int , int);
void pairArr();

int main()
{
    int a, b;
   cout << "Enter two numbers you wanna pair up: ";
   cin >> a >> b;

   cout << "Pair formed is: ";
   pairFunc(a,b);

    cout << "Example of array of pair:\n";
    pairArr();

   return 0;
}

void pairFunc(int x, int y){
    pair<int,int> p;
    p.first = x;
    p.second = y;

    cout << "{" << p.first << ", " << p.second << "}\n";

    
}

void pairArr(){
    pair<int, int> arr[] = {{1,2},{2,3},{3,4},{4,5}};

    for(int i=0; i<4; i++){
        cout << "{" << arr[i].first << "," << arr[i].second << "}\n";
    }
}