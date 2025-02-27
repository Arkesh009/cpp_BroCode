// Write a program to reverse an array without using any additional memory (do it in-place).
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;

    for (int i = start; i < end; i++)
    {
        // swap end value with starting value
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // swap(arr[start], arr[end]);
        // move start pointer forward and end pointer backward
        start++;
        end--;
    }
    // Print reversed array
    cout << "Reversed array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}