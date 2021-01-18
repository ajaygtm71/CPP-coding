// { Driver Code Starts

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

 // } Driver Code Ends



class Solution{
	public:
	int least_average(vector<int>nums, int k)
	{
	    vector<int>:: iterator it,it_head;
		int sum =0,global_min =0, subarr=1,result_subarr= 1;
		for(it= nums.begin();it!=nums.begin()+k;it++){
			sum+= *it;
		}
		global_min=sum;
		cout<<sum<<endl;
		it_head= nums.begin();
		for(it =nums.begin()+k ; it!=nums.end();it++ ){
			sum = sum +*it -*it_head;
			subarr++;
			cout<< sum<<endl;
			if(sum < global_min){
				global_min =sum;
				result_subarr = subarr;
			}
			it_head++;
			
		}
		return result_subarr;
	}  
};

// { Driver Code Starts.
int main(){
		int k=2;
		vector<int>nums({3, 7, 5, 20, -10, 0, 12});
		Solution ob;
		int ans = ob.least_average(nums, 2);
		cout << ans << "\n";
	 
	return 0;
}  // } Driver Code Ends
