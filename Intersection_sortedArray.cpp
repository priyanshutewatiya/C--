#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 2, 4, 5};
    int arr2[] = {2, 3, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> intersectionArr;
    int i = 0, j= 0;

    while(i < n1 && j <n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else{
            intersectionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    cout << "Intersection of the two sorted arrays: ";
    for (int num : intersectionArr){
        cout << num << " ";
    }
    return 0;

}