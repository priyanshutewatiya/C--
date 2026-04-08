#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,0,-1,0,-2,2};
    int target = 0;
     
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
            // skip duplicate i
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        for (int j = i + 1; j < n; j++) {
                // skip duplicate j
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l) {
                long long sum = 1LL * arr[i] + arr[j] + arr[k] + arr[l];

                if (sum == target) {
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                    k++;
                    l--;
                     // skip duplicate k
                    while (k < l && arr[k] == arr[k - 1]) k++;

                    // skip duplicate l
                    while (k < l && arr[l] == arr[l + 1]) l--;
                }
                else if (sum < target) {
                      k++;
                }
                else {
                    l--;
                }
            }
        }
    }
   
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;   
}

/* ****************** BRUTE FORCE ********
        int n = arr.size();
    set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {
                        long long sum = 1LL * arr[i] + arr[j] + arr[k] + arr[l];

                        if (sum == target) {
                            vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());

        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[i].size(); j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }


        ******************  BETTER APPROACH *******************

    set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                unordered_set<long long> hashset;

                for (int k = j + 1; k < n; k++) {
                    long long sum3 = 1LL * arr[i] + arr[j] + arr[k];
                    long long fourth = 1LL * target - sum3;

                    if (hashset.find(fourth) != hashset.end()) {
                        vector<int> temp = {arr[i], arr[j], arr[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }

                    hashset.insert(arr[k]);
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());

        Idea

Fix 3 elements, and find the 4th using a hash set.

For each pair (i, j) and third index k:

required fourth value is:
𝑡
𝑎
𝑟
𝑔
𝑒
𝑡
−
(
𝑛
𝑢
𝑚
𝑠
[
𝑖
]
+
𝑛
𝑢
𝑚
𝑠
[
𝑗
]
+
𝑛
𝑢
𝑚
𝑠
[
𝑘
]
)
target−(nums[i]+nums[j]+nums[k])

If that required value already appeared in this inner traversal, then quadruplet found.

Again use a set to avoid duplicates.
*/