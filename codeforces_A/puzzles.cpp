#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n = 0;
	int p = 0;
	cin>>n>>p;

	int* arr;
	arr = new int[p];

	for(int i=0;i<p;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+p);
	
	int *diffArr;
	diffArr = new int[p-n+1];

	int min = arr[n-1] - arr[0];
	for(int j=0;j<p-n+1;j++)
	{
		diffArr[j] = arr[j+n-1]-arr[j];
		if(diffArr[j]<min) min = diffArr[j];
	}	
	cout<<min<<endl;
return 0;
}