#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 5, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> unionArr;
    int i = 0, j= 0;

    while(i < n1 && j <n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.empty() || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.empty() || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < n1){
        if(unionArr.empty() || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j < n2){
        if(unionArr.empty() || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    cout << "Union of the two sorted arrays: ";
    for (int num : unionArr){
        cout << num << " ";
    }   
    return 0;
}