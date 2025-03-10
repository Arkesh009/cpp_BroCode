// Write a program to check if a string is a palindrome.

#include <bits/stdc++.h>
#include <chrono>
using namespace std;

// boolean func to to check palindrome
bool isPalindrome(string &s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
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
    getline(cin, s);

    auto start = chrono::high_resolution_clock::now();

    bool result = isPalindrome(s);

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    if (result)
    {
        cout << "its a palindrome\n";
    }
    else
    {
        cout << "its not\n";
    }

    cout << "Time taken by function: " << duration.count() << "ms\n";

    return 0;
}