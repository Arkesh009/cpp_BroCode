#include<bits/stdc++.h>
using namespace std;
struct car{
    string model;
    int year;
    string color;
};

void display(car a);
void paint(car &a);

int main()
{
   car car1, car2, car3;

   car1.model = "Lamborghini";
   car1.year = 1980;
   car1.color = "Black";

   car2.model = "Mustang";
   car2.year = 1990;
   car2.color = "Red";

   car3.model = "Bugatti";
   car3.year = 2000;
   car3.color = "Grey";

   display(car1);
   display(car3);
   
   cout << "Change the color of 1st car\n";
   paint(car1);
   display(car1);

   return 0;
}

void display(car a){
    cout << "Your car is: " << a.model << '\n';
    cout << "Color is: " << a.color<< '\n';
    cout << "Year is: " << a.year << "\n\n";
}


void paint(car &a){
    int n;
    cout << "Choose color you wanna paint your car:\n";
    cin >> n;

    if(n == 1){
        a.color = "Golden";
    }
    else{
        a.color = "Silver";
    }
}