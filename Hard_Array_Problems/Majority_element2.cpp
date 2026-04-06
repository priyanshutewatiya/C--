#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,2,1,1,3,2,2};
    int n = arr.size();
    vector<int>ans;

    int count1 = 0 , candidate1 = 0;
    int count2 = 0 , candidate2 = 0;

    for(int num : arr){
        if(candidate1 == num){
            count1++;
        }
        else if(candidate2 == num){
            count2++;
        }
        else if(count1 == 0){
            candidate1 = num;
            count1 = 1;
        }
        else if(count2 == 0){
            candidate2 = num;
            count2 = 0;
        }
        else{
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;

    for(int num : arr){
        if(candidate1 == num){
            count1++;
        }
        else if(candidate2 == num ){
            count2++;
        }
    }
    if (count1 > n / 3){
        ans.push_back(candidate1);
    }
    if (count2 > n / 3){
        ans.push_back(candidate2);
    }

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}

/*
Because elements occurring more than n/3 can be at most 2, we track:

candidate1, count1
candidate2, count2

First pass
Find possible candidates.

Second pass
Verify whether those candidates actually appear more than n/3 times.

Verification is necessary because first pass gives only potential candidates
*/