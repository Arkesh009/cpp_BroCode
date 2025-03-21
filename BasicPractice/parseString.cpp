// string with mixed data types, stringstream can help you parse it correctly.

#include<bits/stdc++.h>
using namespace std;

int main()
{
   string data = "25 70.4 Arkesh";
   stringstream ss(data);

   int a;
   double b;
   string c;

   ss >> a >> b >> c;

   cout << "Int: " << a << "\nDouble: " << b << "\nString: " << c;

   return 0;
}