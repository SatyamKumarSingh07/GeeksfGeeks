#include<iostream>
using namespace std;

string reverse(string str){
    int n = str.length();
    if(n==0)
        return "";
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    return str;
    
    
}
int main(){
    string str;
    cin>>str;
    cout<<reverse(str);
    return 0;

}