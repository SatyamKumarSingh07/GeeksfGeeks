#include<iostream>
using namespace std;
	int isRotatedPalindrome(string s)
	{
            int n = s.length();
            for(int i=0;i<n;i++){
                string temp = s.substr(i+1,n-i-1)+s.substr(0,i+1);
                if(isRotatedPalindrome(temp)){
                    return 1;
                }
            }
            return 0;

	}
int main(){
    string s;
    cin>>s;
    cout<<isRotatedPalindrome(s);
    return 0;
}