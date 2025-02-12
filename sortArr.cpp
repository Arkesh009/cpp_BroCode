#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int size);

int main()
{
    int arr[] = {10, 12, 19, 11, 13, 16, 18, 15, 14, 17};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArr(arr, size);

    for (int i : arr)
    {
        cout << i << "\n";
    }

    return 0;
}

void sortArr(int arr[], int size)
{

    int temp;
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}