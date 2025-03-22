// Building a String Dynamically

#include<bits/stdc++.h>
using namespace std;

int main()
{
   stringstream ss;

   int age = 25, dob = 1999;
    double cgpa = 70.4;
    string name = "Arkesh";
   
   ss << "My name is " << name << " I am " << dob << " born " << "so my age is " << age << " and my CGPA is " << cgpa;

   string result = ss.str();
   cout << result;

   return 0;
}