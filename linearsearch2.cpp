#include<iostream>
using namespace std;
int linearsearch2(int size , int arr[], int key){

    for (int i = 0; i < key; i++)
    {
        if (arr[i]==key)
        {
            cout<<"The index is ";
            return i;
        
        }
        
    }
    return -1;
    
}



int main(){

   int size;
   cin>>size;
   int arr[size];


for (int i = 0; i < size; i++)
{
    cout<<"Enter the elements : ";
    cin>>arr[i];
}
 int key;
 cin>>key;


cout<<linearsearch2(size , arr , key)<<endl;
{

}







}
