// Temprature conversion program
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double temp;
    char unit;
    cout << "*******Temprature Conversion Scale*******\n";
    cout << "F = Farhenheit\n";
    cout << "C = Celcius\n";
    cout << "Choose the unit to convert the value into\n";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temp in celcius\n";
        cin >> temp;
        temp = (1.8 * temp) + 32;
        cout << "Temprature in Farhenheit = " << temp << "\n";
    }
    else if (unit = 'C' || unit == 'c')
    {
        cout << "Enter the temp in Farhenheit\n";
        cin >> temp;
        temp = (temp - 32) / 1.8;
        cout << "Temprature in Celcius = " << temp << "\n";
    }
    else
    {
        cout << "Invalid input\n";
    }

    return 0;
}