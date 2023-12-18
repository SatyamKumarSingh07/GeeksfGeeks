#include<iostream>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;
 
    // To store index of next unique element
    int j = 0;
 
    // Doing same as done in Method 1
    // Just maintaining another updated index i.e. j
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
 
    arr[j++] = arr[n-1];
 
    return j;
}
int removeduplicates(string str)
{
    if(str.length()==0 || str.length()==1)
    {
        return str.length();
    }
    int j=0;
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]!=str[i+1])
        {
            str[j++]=str[i];
        }
    }
    str[j++]=str[str.length()-1];
    return j;
}
int main()
{
    int arr[]={1,2,2,3,4,4,4,5,5,6,7,7,8,8,9,9,9,9,9,9,9,9,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    n=removeDuplicates(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    string str="aaabbbcccdddeeefffggg";
    int m=str.length();
    m=removeduplicates(str);
    for(int i=0;i<m;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    return 0;
}

