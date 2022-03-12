// TC: O(N^2)
//Prefix SubArray Sum Approach
#include<iostream>
using namespace std;

int largestSubArraySum(int arr[], int n){
    int largest_sum = 0;
    //Create a prefix array

    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n;i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = i; j < n;  j++){
            // Subarray Sum = prefix[j] - prefix[i-1] ; i>0
            // Subarray Sum = prefix[j] ; i=0
            int subArraySum = i > 0 ? (prefix[j] - prefix[i - 1]) : prefix[j];
            largest_sum = max(largest_sum, subArraySum);
        }
    }

    return largest_sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout<<largestSubArraySum(arr, size);

    return 0;
}