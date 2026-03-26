#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int n = arr.size();

    if(n==0) return 0;

    unordered_set<int>set(arr.begin(),arr.end());
    int longest = 0;

    for(int num : set){
        // Start only if num is the first element of a sequence
        if(set.find(num - 1) == set.end()){
            int current = num;
            int count = 1;

            while(set.find(current + 1) != set.end()){
                current = current + 1;
                count++;
            }
            longest = max(longest , count);
        }
    }
    
    cout << "Longest Sequence : " << longest <<endl;
    return 0;
}





//BRUTE FORCE - Approch
/*
    bool isSequence(vector<int>&arr,int target){
    for(int num : arr){
        if(num == target){
            return true;
        }
    }
    return false;

}
int main()
{
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int n = arr.size();

    if(n==0){
        return 0;
    }
    int longest = 1;

    for (int i = 0; i < n; i++){
        int x = arr[i];
        int count = 1;

        while(isSequence(arr,x+1)){
            x = x +1;
            count++;
        }
        longest = max(longest,count);
    }
    cout << longest << endl;
}

*******************************************************************************************************
        BETTER APPROACH 

    if(n==0){
        return 0;
    }
    sort(arr.begin(),arr.end());

    int count = 1 , longest = 1;

    for(int i = 1 ; i < n; i++){
        if(arr[i] == arr[i-1]){
            continue;
        }
        else if (arr[i] == arr[i-1] +1){
            count++;
        }
        else{
            count = 1;
        }
        longest = max(longest,count);
    }
*/