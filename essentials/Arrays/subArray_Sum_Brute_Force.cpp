#include<iostream>
using namespace std;

int largestSumSubArray1(int arr[], int n){
    int largest_sum = 0;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n;  j++){
            int subArraySum = 0;
            for (int k = i; k <= j; k++){
                subArraySum += arr[k];
            }
            largest_sum = max(largest_sum, subArraySum);
        }
    }

    return largest_sum;
};

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout<<largestSumSubArray1(arr, size);

    return 0;
}