// Write a program to check if a string is a palindrome.

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s){
    int start = 0;
    int end = s.length()-1;
    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
   string s;
    cout << "Enter the string\n";
    getline(cin,s);

    if(isPalindrome(s)){
        cout << "its a palindrome\n";
    }
    else{
        cout << "its not\n";
    }

   return 0;
}