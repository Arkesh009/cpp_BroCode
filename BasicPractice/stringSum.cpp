// Convert String to Integers and Find Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the space seperated string of numbers\n";
    getline(cin, s);

    // token to read integer values from stream
    int token;
    stringstream ss(s);
    int sum = 0;

    // inserting int value inside the token
    while (ss >> token)
    {
        sum += token;
    }

    // output
    cout << "The sum of all integers in the string: " << sum;

    return 0;
}