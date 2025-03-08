// Create a map that stores names as keys and their ages as values. Implement a function to find the age of a person by their name.

#include<bits/stdc++.h>
using namespace std;

int age(map<string, int>&, string);

int main()
{
   map<string, int> m;
   int n;
   cout << "Enter map size\n";
   cin >> n;
   cin.ignore();

   cout << "Enter the key value pairs\n";
    while (n--)
    {
        string name;
        int age;
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();

        m.emplace(name,age);
    }

    cout << "Enter a name to find their age: ";
    string name;
    getline(cin, name);
    cout << "The age = " << age(m, name);

   return 0;
}

int age(map<string, int>& m, string name){
        auto target = m.find(name);
        return (*target).second;
}