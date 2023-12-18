#include<iostream>
using namespace std;
void reArrange(int arr[], int N) {
       
   int even = 0, odd = 1;

    while (even < N && odd < N) {
        while (even < N && arr[even] % 2 == 0) {
            even = even + 2;
        }

        while (odd < N && arr[odd] % 2 != 0) {
            odd = odd + 2;
        }

        if (even < N && odd < N) {
          
            swap(arr[even], arr[odd]);
        }
    }
    }
int main(){
    int arr[]={1,6,5,4,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    reArrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}