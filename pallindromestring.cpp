#include<iostream>
using namespace std;
int ispalindrome(string S){
    int n= S.length();
    for(int i=0;i<n/2; i++){
        if(S[i]!=S[n-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    string S;
    cin>>S;
    cout<<ispalindrome(S);
    return 0;
}