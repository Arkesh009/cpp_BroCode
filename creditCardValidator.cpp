#include<bits/stdc++.h>
using namespace std;
int getDigits(const int number);
int sumOddDigits(const string cardNum);
int sumEvenDigits(const string cardNum);

int main()
{
    string cardNum;
    int result = 0;

    cout << "Enter Your Credit Card number: ";
    cin >> cardNum;

    result = sumOddDigits(cardNum) + sumEvenDigits(cardNum);
    cout << result << '\n';
    if(result%10 == 0 && cardNum.size() == 16 ){
        
        cout << "Your Credit card number is VALID\n";
    }
    else{
        cout << "Number NOT VALID\n";
    }

return 0;
}

int getDigits(const int number){
    return number % 10 + (number/10 % 10);
}
int sumOddDigits(const string cardNum){
    int sum=0;
    for(int i=cardNum.size()-1; i>=0; i-=2){
        sum += cardNum[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const string cardNum){
    int sum=0;
    for(int i=cardNum.size()-2; i>=0; i-=2){
        sum += getDigits((cardNum[i] - '0') * 2);
    }
    return sum;
}