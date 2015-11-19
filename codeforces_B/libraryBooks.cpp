#include <bits/stdc++.h>

using namespace std;

int binarySmallerIndex(int*,int,int,int);
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;

	int* cdfArr = new int[n];
	int cdfSum = 0;
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin>>temp;
		cdfSum+=temp;
		cdfArr[i] = cdfSum;
		//cout<<cdfArr[i]<<" ";
	}
	
	long long int dynamicTime=t;
	int maxCount=0;
	for (int i = 0; i < n; i++)
	{
		if(i!=0) dynamicTime = t+cdfArr[i-1];
		int j=i;
		int Count=0;
		/*while(cdfArr[j]<=dynamicTime&&j<n)
		{
			j++;
			Count++;
		}*/
		Count = binarySmallerIndex(cdfArr,i,n-1,dynamicTime)-i+1;
		if(Count>maxCount) maxCount = Count;
		//cout<<Count<<",";
	}
	cout<<maxCount<<endl;
	
	return 0;
}

int binarySmallerIndex(int* arr,int left,int right,int key)
{
	if(key>arr[right]) return right;
	if(key<arr[left]) return -1;
	if(arr[left]==key) return left;
	else if(arr[right]==key) return right;
	else if((right-left)==1) return left;
	else if(left<right)
	{
		int midIndex = (left + right)/2;
		if(arr[midIndex]>key) return binarySmallerIndex(arr,left,midIndex,key);
		if(arr[midIndex]<key) return binarySmallerIndex(arr,midIndex,right,key);
		if(arr[midIndex]==key) return midIndex;
	}
	else return -1;
}



