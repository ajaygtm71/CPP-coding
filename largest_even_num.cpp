// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution{
    public:
    string LargestEven(string s){
        sort(s.begin(),s.end(),greater<char>());
        auto i = s.rbegin();
        for( i = s.rbegin(); i!=s.rend() ;i++){
            if(*i%2==0) {
                //cout<<*i<<" ";
                //char c = *i;
                //*i=*(s.rbegin());
                //*(s.rbegin()) = c;
                break;
            }
        }
        if(i!=s.rend()){
        char c = *i;
        while(i != s.rbegin()){
            *i=*(i-1);
            i--;
        }
        *i=c;
        //cout<< *i<<" "<<*(i-1)<<" "<<*(i+1)<<endl;
        }
        return s;
    }  
};

// { Driver Code Starts.

int main(){
    
        string s= "1234";     
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    
return 0;
}

  // } Driver Code Ends
