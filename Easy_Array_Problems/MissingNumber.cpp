#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int xor1 = 0; // XOR of all elements in an array
    int xor2 = 0; // XOR of all numbers from 0 to n

    for (int i = 0; i < n; i++)
    {
        xor1 ^= arr[i];
        xor2 ^= i;
    }
    xor2 ^= n;

    cout << "Missing number: " << (xor1 ^ xor2) << endl;

    /*int missingNumber = -1;

    for (int i = 0; i < n; i++){
        if (arr[i] != i){
            missingNumber = i;
            break;
        }
    }
    cout << "Missing number: " << missingNumber << endl;
    */
}