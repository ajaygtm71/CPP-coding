// C++ program to rearrange the elements
// in array such that even positioned are
// greater than odd positioned elements
#include <bits/stdc++.h>
using namespace std;
void swap(int& x, int& y){
	int t = x;
	x=y; y=t;
}

void printArr(int a[],int n){
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout<<endl;	
}
template<int t>
void assign(int (&arr)[t], int n)
{
	int aux[n], i=0;
	for(int x : arr){
		aux[i++] = x;
		//cout<< aux[i-1]<< " ";
	}
	sort(aux,aux+n);
	int mid = n/2;
	if(n%2==0) mid--;
	int j = mid, k=mid+1;
	//cout<<endl<<mid;
	for(i =0 ; i<n; i+=2){
		arr[i]= aux[j--];
		if(i<n-1) arr[i+1] = aux[k++];		
	}
	//cout<<endl;
	printArr(arr,n);
}

// Driver Code
int main()
{
	int A[] { 1,2,3,4,5 };
	int n = sizeof(A) / sizeof(A[0]);
	assign(A, n);
	return 0;
}
