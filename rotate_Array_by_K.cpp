#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int low , int  high){
    while(low < high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k;
    cout<<"Enter value of k :";
    cin >> k;

    int n = sizeof(arr) / sizeof(arr[0]);

    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    
    cout <<"After rotating : "<<endl;
    for(int x : arr){
        cout <<x <<" ";
    }
    return 0;
}