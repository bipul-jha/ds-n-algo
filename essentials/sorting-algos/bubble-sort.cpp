#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> & arr){
    for (int times = 1; times<=arr.size()-1; times++){
        for (int j = 0; j < arr.size() - times; j++){
            swap(arr[j], arr[j + 1]);
        }
    }
}

int main(){
    vector<int> arr = {5, 4, 3, 2, 1, -1, -2, -3};
    bubble_sort(arr);

    for (auto itr = arr.begin(); itr != arr.end(); itr++){
        cout << *itr << ",";
    }
    
    cout << endl;

    return 0;
}