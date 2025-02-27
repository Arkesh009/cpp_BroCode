#include<bits/stdc++.h>
using namespace std;

enum days{mon, tue, wed, thu, fri, sat, sun};

int main()
{
    days week = thu;    

    switch (week)
    {
    case sun:
        cout << "its sunday\n";
        break;
    case mon:
        cout << "its monday\n";
        break;
    case tue:
        cout << "its tuesday\n";
        break;
    case wed:
        cout << "its wednesday\n";
        break;
    case thu:
        cout << "its thursday\n";
        break;
    case fri:
        cout << "its friday\n";
        break;
    case sat:
        cout << "its saturday\n";
        break;

    default:
        cout << "Invalid input\n";
        break;
    }
   
   return 0;
}