#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low , int mid , int high){
    int i = low , j = mid +1;
    vector<int>temp;

    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid){
        temp.push_back(arr[i++]);
    }
    while(j <= high){
        temp.push_back(arr[j++]);
    }
    for(int k = low ; k <= high ;k++){
        arr[k] = temp[k-low];
    }
}
void mergeSort(int arr[],int low ,int high){
    if(low < high){
        int mid = low +(high -low)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int arr[] = {4,3,5,6,2,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);
    
    for(int x : arr){
        cout << x <<" ";
    }
    return 0;
}