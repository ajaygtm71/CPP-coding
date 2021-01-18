// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
int minDist(int arr[], int n, int x, int y);
int main() {

		int ar[] = {3,4,5};
        cout << minDist(ar, sizeof(ar)/sizeof(int), 3, 5) << endl;
    
    return 0;
}
// } Driver Code Ends



int minDist(int arr[], int n, int x, int y) {
    int prev_x = -1, prev_y =-1;
    int global_dist  = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(prev_y!=-1){
                global_dist = min(global_dist,i-prev_y);
            }
            prev_x =i;
        }
        else if(arr[i]==y){
            if(prev_x!=-1){
                global_dist = min(global_dist,i-prev_x);
            }
            prev_y =i;
        }
    }
    return (global_dist<=n)?global_dist:-1;
}
