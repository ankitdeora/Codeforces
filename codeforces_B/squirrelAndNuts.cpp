#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int *arr = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int totalTime = 2*n-1+arr[0];
	for(int j=0;j<n-1;j++)
	{
		totalTime+=abs(arr[j+1]-arr[j]);
	}	
	cout<<totalTime<<endl;
	return 0;
}