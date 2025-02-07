#include<bits/stdc++.h>
using namespace std;

int searchArray(int arr[], int size, int element);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, index=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int element;

    cout << "Enter the element you want to search for\n";
    cin >> element;
    
    index = searchArray(arr, size, element);

    if(index != -1){
        cout << "The element found at index: " << index;
    }
    else{
        cout << "The element does not exist in the array\n";
    }

return 0;
}

int searchArray(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
