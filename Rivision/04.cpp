#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "****** Number Guessing Game*******\n";
    cout << "Guess the number between 1-100\n";

    do
    {
        cin >> guess;

        if (guess > num)
        {
            cout << "Too High\n";
        }
        else if (guess < num)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "CORRECT! " << "\nTries = " << tries;
        }
        tries++;
    } while (guess != num);

    return 0;
}