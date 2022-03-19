//Kadane's Algo
//TC : O(N)

#include<iostream>
using namespace std;

int maximum_subarray_sum(int arr[], int n){
    int currentSum = 0;
    int largestSum = 0;

    for (int i = 0; i < n; i++){
        currentSum += arr[i];

        largestSum = max(largestSum, currentSum);

        if(currentSum < 0)
            currentSum = 0;
    }

    return largestSum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout<<maximum_subarray_sum(arr, size);

    return 0;
}