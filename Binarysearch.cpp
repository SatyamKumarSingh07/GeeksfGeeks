#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int arr[40],start,end,mid,key,size;
cout<<"Enter the size of the array";
cin>>size;

for (int i = 0; i < size; i++)
{
    cout<<"Arr<<["<<i<<"] = " ;
    cin>>arr[i];
}

cout<<"Enter the element of which you want to find its index value : ";
cin>>key;

start=0;
end = size-1;

while (start<=end)
{
    mid = (start+end)/2;

    if (arr[mid]==key)
    {
        cout<<"Element index is"<<mid+1;
        exit (0);
    }
    
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if (key<arr[mid]){
        end = mid -1;
    }
}
cout<<"The Number is not found : "<<endl;ro
    return 0;



}