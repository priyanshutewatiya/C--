#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    // Linear Search
    bool found = false;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            found = true;
            cout << "Element " << target << " found at index " << i << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}