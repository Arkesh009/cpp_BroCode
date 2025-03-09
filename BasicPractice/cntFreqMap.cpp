// Write a program to count the frequency of each character in a string using a map.

#include <bits/stdc++.h>
using namespace std;

void countFreq(string &, int);

int main()
{
    // Input the string
    string s;
    cout << "Enter the string\n";
    getline(cin, s);

    // calling function
    countFreq(s, s.length());

    return 0;
}

// function defination
void countFreq(string &s, int n)
{
    // creating map
    map<char, int> m;
    for (auto i : s)
    {
        // reading each character
        char c = i;
        // incrementing the character occurance
        m[c]++;
    }

    // Printing the output
    for (auto i : m)
    {
        cout << i.first << " : " << i.second << "\n";
    }
}