#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num > 1){
    return num*fact(num-1);
    }
    else{
        return 1;
    }
}

int main()
{
   int num, sum=1;
   cin >> num;

//    for(int i=1; i<=num; i++){
//     sum *= i;
//    }

   cout << fact(num);

   return 0;
}