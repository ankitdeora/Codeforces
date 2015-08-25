#include <iostream>
using namespace std;

int countSetBits(int);

int main(int argc, char const *argv[])
{

	int n=0;
	int m=0;
	int k=0;
	cin>>n>>m>>k;

	int* arr;
	arr = new int[m+1];
	for(int i=0;i<m+1;i++)
	{
		cin>>arr[i];
	}

	int friendCount = 0;
	int temp = 0;
	for(int j=0;j<m;j++)
	{
		temp = arr[j]^arr[m];
		if(countSetBits(temp)<=k) friendCount++;
	}
	cout<<friendCount<<endl;

	return 0;
}

int countSetBits(int n)
{
	int count = 0;
	while(n)
	{
		count += n&1;
		n = n>>1;
	}
	return count;
}