#include<iostream>
using namespace std;
int main()
    {
    	int arr[]={111,222,333,444,555};
    	int n=sizeof(arr)/sizeof(arr[0]);
    	cout<<PalinArray(arr,n);
    	return 0;
    }

int PalinArray(int a[], int n)
    {
    	for(int i=0; i>n; i++){
    	    for(int j=n-1; j<n; j--){
    	        if(a[i]==a[j]){
    	            return 1;
    	        }
    	        else{
    	            return 0;
    	        }
    	    }
    	       
      
    	
    }
    