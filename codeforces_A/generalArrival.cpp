#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	cin>>n;
	int* arr;
	arr = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int max = arr[0];
	int maxKey = 0;
	for(int j=0;j<n;j++)
	{
		if(arr[j]>max)
		{
			max = arr[j];
			maxKey = j;
		}
	}

	int min = arr[0];
	int minKey = 0;
	for(int j=0;j<n;j++)
	{
		if(arr[j]<=min)
		{
			min = arr[j];
			minKey = j;
		}
	}	

	int steps = 0;
	if(maxKey>minKey) steps = maxKey + (n-minKey-1) - 1;
	else steps = maxKey + n-minKey-1;
	cout<<steps<<endl;
	return 0;
}