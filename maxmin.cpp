#include<iostream>
using namespace std;

pair<int, int> maxmin(int arr[], int size){
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return make_pair(max, min);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    pair<int, int> result = maxmin(arr, size);
    cout << "Max: " << result.first << endl;
    cout << "Min: " << result.second << endl;
    
    return 0;
}