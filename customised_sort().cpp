// A C++ program to demonstrate 
// STL sort() using
// our own comparator
#include <algorithm>
#include <iostream>
using namespace std;

// Compares two intervals 
// according to staring times.
bool compareInterval(int x,int y)
{
	if(x<0 && y>=0 || x==0 && y>0) return true;
	else if(x>0 && y<=0 || x==0 && y<0) return false;
	else return false;
}

int main()
{
	int arr[]
		= {12, 11, -13, -5, 6, -7, 5, -3, -6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// sort the intervals in increasing order of
	// start time
	sort(arr, arr + n, compareInterval);
	for (int i = 0; i < n; i++)
		cout<< arr[i]<<" ";

	return 0;
}
