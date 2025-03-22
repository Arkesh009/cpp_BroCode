// Building a String Dynamically

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stringstream ss;
    // data
    int age = 25, dob = 1999;
    double cgpa = 70.4;
    string name = "Arkesh";
    // inserting more info inside the stream of string
    ss << "My name is " << name << " I am " << dob << " born " << "so my age is " << age << " and my CGPA is " << cgpa;
    // converting stream into a string
    string result = ss.str();
    // output string
    cout << result;

    return 0;
}