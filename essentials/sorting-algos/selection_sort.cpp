#include<iostream>
#include<vector>
using namespace std;

void selection_sort(vector<int> &arr){
    for (int pos = 0; pos < arr.size() - 1; pos++){
        int min_position = pos;

        //Find the minimum element's position
        for (int j = pos; j < arr.size(); j++)
        {
            if(arr[j] < arr[min_position])
                min_position = j;
        }

        //Swap the pos and min_position
        swap(arr[pos], arr[min_position]);
    }
}

int main(){
    vector<int> arr = {100, 98, 87, 65, -10, -20, -40};

    selection_sort(arr);

    for (auto itr = arr.begin(); itr != arr.end(); itr++){
        cout << *itr << ",";
    }
    cout << endl;
    return 0;
}