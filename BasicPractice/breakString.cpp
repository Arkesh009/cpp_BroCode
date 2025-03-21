// Breakdown sentance into words using sstream

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    cout << "Enter the sentence\n";
    getline(cin,s);
   stringstream ss(s);

   while(ss >> word){
        cout << word << "\n"; // print each word in nextline
   }
   
   return 0;
}