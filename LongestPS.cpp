
#include <iostream>
#include <string>
using namespace std;


string longestPS(string s){
    int n=s.length();
    string result;
    if(n==0 || n==1) return s;
    for(int i=0;i<n;i++){
        int j,k;
        j=i;
        k=i;
        while(j>=0 && k<n && s[j]==s[k]){
            if(k-j+1 > result.length()) result = s.substr(j,k-j+1);
            j--;k++;
        }
        j=i; k=i+1;
        while(j>=0 && k<n && s[j]==s[k]){
             if(k-j+1 > result.length()) result = s.substr(j,k-j+1);
            j--;k++;
        }
    }
   return result;
}
int main() {
    string s;
    int t;cin>>t;
    while(t--){
    cin>>s;
    cout<<longestPS(s)<<endl;
    }
	return 0;
}
