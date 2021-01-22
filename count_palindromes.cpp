#include <iostream>
using namespace std;

int countPS(string s, int n){
    //cout<<s<<endl;
    if(n==0 || n==1) return 0;
    int count =0;
    for(int i=0;i<n;i++){
        int j,k;
        j=i-1;
        k=i+1;
        while(j>=0 && k<n && s[j]==s[k]){
            count++;
            j--;k++;
        }
        j=i; k=i+1;
        while(j>=0 && k<n && s[j]==s[k]){
            count++;
            j--;k++;
        }
    }
    return count;
}
int main() {

    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        cout<<countPS(s,n)<<endl;
    }
	return 0;
}
