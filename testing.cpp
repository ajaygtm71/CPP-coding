// A O(n) time and O(1) extra space C++ program to
// sort an array according to given indexes
#include<iostream>
using namespace std;
void swap(int* x,int*y){
	int temp = *x;
	*x = *y;
	*y=temp;
}
int partition(int arr[],int index[], int l,int r){
	int pivot = index[r];
	int pIndex = l;
	for(int i=l;i<r;i++){
		if(index[i]<pivot){
			swap(&index[pIndex],&index[i]);
			swap(&arr[pIndex],&arr[i]);
			pIndex++;
		}
	}
	swap(&index[pIndex],&index[r]);
	swap(&arr[pIndex],&arr[r]);
	return pIndex;
}
void reorder(int arr[], int index[], int l, int r)
{
	if(l>=r) return;
	int pIndex = partition(arr,index,l,r);
	reorder(arr,index,l,pIndex-1);
	reorder(arr,index,pIndex+1, r);
}

// Driver program
int main()
{
	int arr[] = {50, 40, 70, 60, 90};
	int index[] = {3, 0, 4, 1, 2};
	int n = sizeof(arr)/sizeof(arr[0]);

	reorder(arr, index, 0, n-1);

	cout << "Reordered array is: \n";
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";

	cout << "\nModified Index array is: \n";
	for (int i=0; i<n; i++)
		cout << index[i] << " ";
	return 0;
}
