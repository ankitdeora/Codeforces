#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	int* arr;
	int sum=0;
	cin>>n;
	arr = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}

	for(int i=0;i<n;i++)
	{
		int max = arr[i];
		int maxKey = i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]>max)
			{
				max = arr[j];
				maxKey = j;
			}
		}
		arr[maxKey] = arr[i];
		arr[i] = max;
	}

	int minSum=0;
	for(int k=0;k<n;k++)
	{
		minSum+=arr[k];
		if(minSum>(sum-minSum)) 
			{
				cout<<k+1<<endl;
				break;
			}
	}

	return 0;
}