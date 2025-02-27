#include<bits/stdc++.h>
using namespace std;

int sumArr(int [],int);
int avgArr(int [],int);
int maxArr(int [],int);

int main()
{
    int size;
    cout << "Enter the number of elements you want to enter\n";
    cin >> size;
    int arr[size];
    
    cout << "Enter the elements\n";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int sum = sumArr(arr,size);
    int avg = avgArr(arr,size);
    int maximum = maxArr(arr,size);

    cout << "The sum of the numbers: " << sum << "\n";
    cout << "The average of the numbers: " << avg << "\n";
    cout << "The maximum of the numbers: " << maximum << "\n";

   return 0;
}

int sumArr(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int avgArr(int arr[], int size){
    int sum = sumArr(arr,size);
    return sum/size;
}

int maxArr(int arr[], int size){
    int max = arr[0];
    for(int i=0; i<size-1; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}