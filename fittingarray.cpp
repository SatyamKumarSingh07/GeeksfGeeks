#include<iostream>
#include<algorithm>
using namespace std;
 int isFit(int arr[], int brr[], int n){
        sort(arr,arr+n);
        sort(brr,brr+n);
         for(int i=0;i<n;i++){
            if(arr[i]>brr[i]){
            return -1;
            }
        }
        return 1;
    }
int main(){
    int arr[]={7, 5, 3,2};
    int brr[]={5,4,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<isFit(arr,brr,n);
    return 0;
}