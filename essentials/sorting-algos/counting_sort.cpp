#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(N + Range)
//Works when the data is in a range

void counting_sort(vector<int> &arr){
    int largest = -1;
    // Find the largest element in the array O(N)
    for (int i = 0; i < arr.size(); i++){
        largest = max(largest, arr[i]);
    }

    vector<int> freq_map(largest + 1, 0);

    for (int i = 0; i < arr.size(); i++){
        freq_map[arr[i]]++;
    }

    //Put the elements from freq map back to original array O(Range)
    int j = 0;
    for (int i = 0; i < freq_map.size(); i++)
    {
        while(freq_map[i] > 0){
            arr[j] = i;
            j++;
            freq_map[i]--;
        }
    }
};

int main(){
    vector<int> arr = { 97,98,91,87,78,61,34,23};

    counting_sort(arr);

    for (auto itr = arr.begin(); itr != arr.end(); itr++){
        cout << *itr << ",";
    }
    cout << endl;
    return 0;
}