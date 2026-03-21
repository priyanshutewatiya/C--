#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 2, 1, 2, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0, element = 0;

    for (int i = 0; i < n; i++){
        if (count == 0){
            element = arr[i];
        }
        else if (element == arr[i]){
            count++;
        }
        else{
            count--;
        }
    }

    int count2 = 0;
    for (int x : arr){
        if (x == element){
            count2++;
        }
    }

    if (count2 > n / 2){
        cout << element << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}

/*
    unordered_map<int,int>freq;
    for(int x : arr){
        freq[x]++;
    }
    for(auto&it:freq){
        if(it.second>n/2){
            cout<<it.first<<endl;
            break;
        }
    }
    */