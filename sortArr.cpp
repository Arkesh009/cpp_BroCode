#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,2,1,5,6,8,4,9,7,3};
    int size = sizeof(arr)/sizeof(int);
    for(int j=0; j<size; j++){
        for(int i=0; i<size; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }else{
            i++;
        }
    }
    
    }

    for(int i=0; i<size; i++){
        cout << arr[i] <<"\n";
    }
return 0;
}