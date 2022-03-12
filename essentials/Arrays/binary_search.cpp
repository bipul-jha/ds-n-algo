#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int start = 0, end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;
        
        if(arr[mid] == key)
            return mid;

        else if(arr[mid] < key){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int key;
    cin >> key;
    int arr[] = {12, 13, 14, 15, 76, 89};
    int size = sizeof(arr) / sizeof(int);
    int index = binary_search(arr, size, key);

    if(index != -1){
        cout << "Element found at " << index << endl;
    }
    else{
        cout << "Element is not present in the array" << endl;
    }
    return 0;
}