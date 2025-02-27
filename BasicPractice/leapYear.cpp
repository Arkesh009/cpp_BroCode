#include<bits/stdc++.h>
using namespace std;

string leapYear(int year);

int main()
{
   int year;
   cout << "Enter the year: ";
   cin >> year;
   cout << year << leapYear(year) << "\n";
   return 0;
}

string leapYear(int year){
    if(year%4 == 0){
        if(year%100 == 0){
            if(year%400 == 0) return " is a leap year";
            else return " is not a leap year";
        }
        return " is a leap year";
    }
    return " is not a leap year";
}