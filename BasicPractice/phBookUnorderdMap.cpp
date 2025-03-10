// Implement a simple phonebook using unordered_map where you can store and look up phone numbers by name.

#include<bits/stdc++.h>
using namespace std;

void phBookInput(unordered_map<string, long long int>&, int n);
void showPhBook(unordered_map<string, long long int>&, int n);
int main()
{
   unordered_map<string, long long int> ph;
   cout << "Enter the size of the phonebook\n";
   int n;
   cin >> n;
   cin.ignore();
   cout << "Enter the name and number of the contact\n";
   phBookInput(ph,n);
   cout << "\n---PHONE BOOK---\n";
   showPhBook(ph,n);

   return 0;
}

void phBookInput(unordered_map<string, long long int> &ph, int n){
    while(n--){
        long long int num;
        string name;
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter number: ";
        cin >> num;
        cin.ignore();
        
        ph.emplace(name, num);
    }
}

void showPhBook(unordered_map<string, long long int>& ph, int n){
    for(auto i: ph){
        cout << i.first << ": " << i.second << "\n";
    }
}