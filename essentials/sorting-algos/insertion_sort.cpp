#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &arr){
    for (int i = 1; i < arr.size(); i++){
        int current = arr[i];
        int prev = i-1;
       
        //Find the right position to place `current` element
        while(prev>=0 and arr[prev] > current){
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = current;
    }
}

int main(){
    vector<int> arr = {100, 98, 87, 65, -10, -20, -40};

    insertion_sort(arr);

    for (auto itr = arr.begin(); itr != arr.end(); itr++){
        cout << *itr << ",";
    }
    cout << endl;
    return 0;
}