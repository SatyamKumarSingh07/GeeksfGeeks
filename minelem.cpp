#include<iostream>
using namespace std;
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];
     int min , size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    min = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min)
            min = arr[i];
    }
    cout<<"Minimum element is: "<<min<<endl;
    return 0;
}
