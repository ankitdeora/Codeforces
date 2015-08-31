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

	int largeIndex=0;
	int smallIndex=0;

	int leftMax = 0;
	int rightMin = 0;

	while(arr[largeIndex]<arr[largeIndex+1])
	{
		largeIndex++;
		if(largeIndex>=n-1) 
		{
			largeIndex = 0;
			break;
		}

	}

	smallIndex = largeIndex;

	while(arr[smallIndex]>arr[smallIndex+1])
	{
		smallIndex++;
		if(smallIndex>=(n-1))
			break;
	}

	int checkingIndex = smallIndex+1;
	bool arrayFine = true;
	bool arrayLeftAligned = false;
	bool arrayRightAligned = false;

	while(checkingIndex<n-1)
	{
		if(arr[checkingIndex]>arr[checkingIndex+1])
		{
			arrayFine = false;
			break;
		}
		checkingIndex++;
	}

	if(largeIndex!=0)
	{
		if(arr[smallIndex]>arr[largeIndex-1]) arrayLeftAligned=true;
	}
	else arrayLeftAligned = true;

	if(smallIndex!=(n-1))
	{
		if(arr[largeIndex]<arr[smallIndex+1]) arrayRightAligned = true;
	}
	else arrayRightAligned = true;


	if(arrayFine&&arrayLeftAligned&&arrayRightAligned)
	{
		cout<<"yes"<<endl;
		cout<<largeIndex+1<<" "<<smallIndex+1<<endl;
	}
	else
		cout<<"no"<<endl;

	return 0;
}