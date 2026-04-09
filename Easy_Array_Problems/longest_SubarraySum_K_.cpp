#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<long long, int> mp;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        if (mp.find(sum - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum - k]);
        }

        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, -1, 5, -2, 3};
    int k = 3;
    cout << longestSubarrayWithSumK(arr, k) << endl;
}



/* If there exists some earlier prefix sum:
    sum - k

then:
    currentSum - previousSum = k

So subarray between those indices has sum k.
Formula

If:

prefixSum[i] - prefixSum[j] = k

then:

prefixSum[j] = prefixSum[i] - k

So while traversing:

compute current prefix sum

check whether sum - k existed before

if yes, update maximum length

If interviewer asks:

How do you solve longest subarray with sum K?

You say:

I use prefix sum and hashmap.
While traversing, I keep current prefix sum.
If sum == k, then subarray from 0 to i is valid.
Otherwise, I check whether (sum - k) has appeared before.
If yes, then the subarray between previous index + 1 and current index has sum k.
I store only the first occurrence of each prefix sum to maximize length.
This gives O(n) time and O(n) space complexity.
*/