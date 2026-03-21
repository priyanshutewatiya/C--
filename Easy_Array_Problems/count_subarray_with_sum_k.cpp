#include <bits/stdc++.h>
using namespace std;

int countSubarraysSumK(vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    freq[0] = 1;

    int sum = 0;
    int count = 0;

    for (int x : arr) {
        sum += x;

        if (freq.find(sum - k) != freq.end()) {
            count += freq[sum - k];
        }

        freq[sum]++;
    }

    return count;
}

int main() {
    vector<int> arr = {1, 1, 1};
    int k = 2;
    cout << countSubarraysSumK(arr, k);
}


/*
Why initialize freq[0] = 1?

This is extremely important.

It means:

before starting, prefix sum 0 has occurred once.

This handles subarrays starting from index 0.

-- Longest

Need biggest distance
→ store first index

Count

Need total ways
→ store frequency
*/