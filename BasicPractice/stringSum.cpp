// Convert String to Integers and Find Sum

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cout << "Enter the space seperated string of numbers\n";
   getline(cin, s);

   int token;
    stringstream ss(s);
    int sum = 0;

    while(ss >> token){
        sum += token;
    }

    cout << "The sum of all integers in the string: ";
   
   return 0;
}