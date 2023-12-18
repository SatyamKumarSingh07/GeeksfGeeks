#include<iostream>
using namespace std;
  int countZeroes(int arr[], int n) {
        int count=0;
        for(int i =0; i<n; i++){
            if(arr[i]==0){
                count++;
            }
        }
        return count;
    }
int main(){
    int arr[]={1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countZeroes(arr,n);
    return 0;
}