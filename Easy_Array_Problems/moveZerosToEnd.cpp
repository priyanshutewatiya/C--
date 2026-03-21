// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            swap(arr[i], arr[k]);
            k++;
        }
    }

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}