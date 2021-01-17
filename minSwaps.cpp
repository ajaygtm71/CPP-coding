// C++ program to find minimum swaps required 
// to club all elements less than or equals 
// to k together 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSwaps(int* arr, int n,int k){

	int good = 0;
	for(int i =0 ; i< n ; i++){
		if(arr[i]<=k) good++ ;
	}
	int  i =0, j= good-1;
	int bad = 0,new_bad =0;
	for(int i =0 ; i<=j ; i++){
		if(arr[i]>k) bad++;
	}
	i++,j++;
	while(j<n){
		new_bad= bad;
		if(arr[i-1]>k)  new_bad--;
		if(arr[j]>k ) new_bad++;
		bad = (bad<new_bad)?bad:new_bad;
		i++,j++;
	}
	return bad;
}
int main(){

	int arr[] = {2, 1, 5, 6, 3};
	cout<<minSwaps(arr,sizeof(arr)/sizeof(int),3)<<endl;

	 int arr1[] = {2, 7, 9, 5, 8, 7, 4};
	cout<<minSwaps(arr1,sizeof(arr1)/sizeof(int),5);
	return 0;
}
