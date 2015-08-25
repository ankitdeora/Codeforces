// in the given problem n and t can take max value up to 10^5 so our totalTime could be maximum 10^10 as n*t will be the approximate max value
// but int32 can't store this much big value...so be need to use uint64_t in <stdint.h> library
#include <iostream>
#include <stdint.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	int t=0;
	cin>>n>>t;

	int* arr;
	arr = new int[t];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}

	uint64_t TotalTime = arr[0]-1;

	for(int j=0;j<t-1;j++)
	{
		if(arr[j+1]>=arr[j]) TotalTime+= (arr[j+1]-arr[j]);
		else if(arr[j+1]<arr[j]) TotalTime+= (n-(arr[j]-arr[j+1]));
	}
	cout<<TotalTime<<endl;

	return 0;
}