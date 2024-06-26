/*
Write a function:

class Solution { public int solution(int[] A); }

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int smallestInteger (vector<int> &nums, int n) {
    /*bool exist[n+1] = {false};

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n)
            exist[arr[i]] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!exist[i]) {
            return i;
        }
    }

    return n + 1;*/

    sort(nums.begin(), nums.end());
    int ans = 1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == ans) {
            ans++;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1, 3, 6, 4, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << smallestInteger(arr, n) << endl;
    return 0;
}