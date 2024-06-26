/*
Given an array arr[] of size N. The task is to find the sum of the contiguous subarray within a arr[] with the largest sum. 

Input: arr = {-2,-3,4,-1,-2,1,5,-3}
Output: 7
Explanation: The subarray {4,-1, -2, 1, 5} has the largest sum 7.

Input: arr = {2}
Output: 2
Explanation: The subarray {2} has the largest sum 1.

*/


#include <iostream>
using namespace std;

int maxSum(int arr[], int size) {
    int maxSum = 0; int currSum = 0;

    for (int i = 0; i < size; ++i) {
        currSum += arr[i];          // Add the Current Index to the Previous value

        if (currSum > maxSum) {     // Only append the maxSum when the total of the multiple index becomes more than the maxSum
            maxSum = currSum;
        }

        if (currSum < 0) {          // Make currSum = 0 when you find a non negative number as well as sum of numbers
            currSum = 0;
        }
    }

    return maxSum;
}
int main() {
    int arr[20] = {-2, -3, 4, -1, -2, 1, 5, -7, 5, 9, -14, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxSum(arr, n) << endl;

    int arr1[1] = {2};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << maxSum(arr1, n1) << endl;

    return 0;
}