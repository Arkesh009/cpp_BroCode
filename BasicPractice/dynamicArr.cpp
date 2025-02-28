// Implement a program to dynamically allocate an array using pointers and then find its largest element.
#include <bits/stdc++.h>
using namespace std;
// function declaration
int largest(int num[], int size);

int main()
{
    // input arr size
    int n;
    cout << "Enter array size:\n";
    cin >> n;
    // dynamic allocation of array
    int *arr = new int[n];
    cout << "Enter array elements\n";
    // input arr elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // printing result
    cout << "The largest element = " << largest(arr, n) << "\n";
    // freeing memory dynamically
    delete arr;
    return 0;
}
// max element finder function
int largest(int num[], int size)
{
    int max = num[0];
    for (int i = 1; i < size; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    return max;
}