// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    bool equalPartition(int n, int arr[])
    {
		int total=0;
        for(int i=0;i<n;i++){
			total+=arr[i];
		}
		if(total%2!=0) {
			cout<<"sum is odd\n";
			return 0;
			}
		cout<<"sum is even\n";	
		total=total/2;
		bool dp[n+1][total+1];
		for(int i=0;i<=n;i++){
			dp[i][0]= true;
		}
		for (int j = 1; j <=total; j++)
        	dp[0][j] = false;
		for(int i =0;i<=n;i++){
			for(int j=0;j<=total;j++){
				cout<<dp[i][j]<<" ";	
			}
			cout<<endl;
		}	
		cout<<"after run"<<endl;
		for(int i =1;i<=n;i++){
			for(int j=1;j<=total;j++){
				if(arr[i-1]<=j)
					dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
				else
					dp[i][j]=dp[i-1][j] ;
				cout<<dp[i][j]<<" ";	
			}
			cout<<endl;
		}
		return dp[n][total];
    }
};

// { Driver Code Starts.

int main(){
		int arr[]={ 2, 4, 11, 10, 5 };
        Solution ob;
        if(ob.equalPartition(sizeof(arr)/sizeof(int), arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    
    return 0;
}  
