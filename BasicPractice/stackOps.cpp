// Implement a stack using stack that supports the following operations: push, pop, peek, and check if the stack is empty.

#include<bits/stdc++.h>
using namespace std;

int main()
{
   stack<int> s;
   int n;
   // basic operations
   cout << "Enter the number of elements to push in stack: ";
   cin >> n;
   cout << "Enter the elements\n";
   while(n--){
        int i;
        cin >> i;
        s.push(i);
   }

   cout << "Enter the number of elements you wanna pop from stack: ";
   int a;
   cin >> a;
   while(a--){
        s.pop();
   }

   cout << "The element at the top of the stack = " << s.top() << "\n";

   // check if stack is empty
   if(!s.empty()){
        cout << "The stack isn't empty\n";
   }else{
        cout << "The stack is empty\n";
   }
   
   return 0;
}