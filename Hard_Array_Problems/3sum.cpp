#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();

    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++) {
        // skip duplicate fixed elements
        if(i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if(sum < 0) {
                left++;
            }
            else if(sum > 0) {
                right--;
            }
            else {
                ans.push_back({arr[i], arr[left], arr[right]});

                left++;
                right--;

                // skip duplicate left values
                while(left < right && arr[left] == arr[left - 1]) {
                    left++;
                }

                // skip duplicate right values
                while(left < right && arr[right] == arr[right + 1]) {
                    right--;
                }
            }
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/************** BRUTE APPROACH   ****************
 
    vector<int>arr = {-1 , 0 , 1, 2 , -1 , -4};
    int n = arr.size();

    set<vector<int>>st;

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            for(int k = j + 1; k < n ; k++){
                if(arr[i] + arr[j] + arr[k] == 0){
                    vector<int>temp = {arr[i] , arr[j] , arr[k]};
                    //Sorting makes same triplet look identical
                    sort(temp.begin() , temp.end());
                    //set stores only unique values
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin() , st.end());

    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0; j < ans[0].size() ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    Time:
        O(n^3 * log m) because:
        3 loops → O(n^3)
        insertion in set → O(log m)
    Space:
        O(m) for storing unique triplets
    
    return 0;
*/

/**********************   BETTER APPROACH   **************** 
 
    vector<int>arr = {-1 , 0 , 1, 2 , -1 , -4};
        int n = arr.size();

        set<vector<int>>st;

        for(int i = 0 ; i < n ; i++)
        {
            unordered_set<int> hset;

            for(int j = i + 1 ; j < n ; j++)
            {
                int third = -(arr[i] + arr[j]);

                if(hset.find(third) != hset.end())
                {
                    vector<int>temp = {arr[i] , arr[j] , third};
                    sort(temp.begin() , temp.end());
                    st.insert(temp);
                }
                hset.insert(arr[j]);
            }
        }
        vector<vector<int>>ans(st.begin() , st.end());
        
        So for every pair (i, j)
            we just need to check:
                For each i:
                    Find two numbers in remaining array whose sum = -arr[i]
            “Have we already seen -(arr[i] + arr[j]) ?"
                ~If required is already in set → triplet found
                Else → store arr[j] in set
    
 Time: O(n^2 * log m)
        outer loop n
        inner loop n
        set insert for triplet uniqueness
Space: O(n) + O(m)

*/