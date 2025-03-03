// Write a program to check if a given year is a leap year.
#include <bits/stdc++.h>
using namespace std;
// Function declaration
string leapYear(int year);

int main()
{
    int year;
    cout << "Enter the year: ";
    cin >> year;
    cout << year << leapYear(year) << "\n";
    return 0;
}

string leapYear(int year)
{
    // check if year is divisible by 4
    if (year % 4 == 0)
    {
        // if it is divisible by 100
        if (year % 100 == 0)
        {
            // then it should also be divisible by 400
            if (year % 400 == 0)
                return " is a leap year";
            // if not divisible by 400 but 100 then its not a leap year
            else
                return " is not a leap year";
        }
        return " is a leap year";
    }
    // if not divisible by 4 then not a leap year
    return " is not a leap year";
}