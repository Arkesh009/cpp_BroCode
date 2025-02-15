#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    string model;
    string color;
    int year;
    int topSpeed;

    car(string model, string color, int year, int topSpeed)
    {
        this->model = model;
        this->color = color;
        this->year = year;
        this->topSpeed = topSpeed;
    }
};

int main()
{
    car car1("Bugatti", "Black", 1999, 350);

    cout << car1.model << "\n";
    cout << car1.color << "\n";
    cout << car1.year << "\n";
    cout << car1.topSpeed << "\n";

    return 0;
}