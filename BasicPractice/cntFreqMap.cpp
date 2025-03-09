// Write a program to count the frequency of each character in a string using a map.

#include<bits/stdc++.h>
using namespace std;

void countFreq(string &, int);

int main()
{
   string s;
   cout << "Enter the string\n";
   getline(cin, s);

   countFreq(s,s.length());

   return 0;
}

void countFreq(string &s, int n){
    map<char, int> m;
    for(auto i: s){
        char c = i;
        m[c]++;
    }

    for(auto i : m){
        cout << i.first << " : " << i.second << "\n";
    }
}