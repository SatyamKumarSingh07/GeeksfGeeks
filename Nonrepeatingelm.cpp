#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
 int firstNonRepeating(int arr[], int n) 
    {
         std::unordered_map<int, int> count;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[arr[i]] == 1) {
            return arr[i];
        }
    }
    return 0;
       
    }
int main(){
    int arr[]={-1,-2,3,-2,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<firstNonRepeating(arr,n);
    return 0;
}