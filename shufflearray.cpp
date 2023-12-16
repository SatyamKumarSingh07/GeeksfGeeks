#include<iostream>
using namespace std;
void sufflearray(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        int j = rand()%(size-i)+i;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    sufflearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}