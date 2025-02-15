#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    string model;
    int year;
    string color;

    void speed()
    {
        cout << "Speeding up!\n";
    }
    void paint()
    {
        cout << "Changing color to Black\n";
    }
    void horn()
    {
        cout << "Blow Horn!!!\n";
    }
};

int main()
{
    car car1;
    cout << "Enter the car model\n";
    getline(cin, car1.model);

    cout << "Enter color of the car\n";
    getline(cin, car1.color);

    cout << "Enter year of launching\n";
    cin >> car1.year;

    car1.speed();
    car1.paint();
    car1.horn();

    return 0;
}