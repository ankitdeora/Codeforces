/*there are two implementations:-
1. using recursion
2. using binary representation of the subsets

Here we have implemented the binary representation
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int subsetCount = pow(2,size);

	for(int i=0;i<subsetCount;i++)
	{
		int n=i;
		cout<<"{";
		for(int j=0;j<size;j++)
		{
			if(n&1==1)
			{
				cout<<arr[size-j-1]<<",";
			}
			n>>=1;
		}
		cout<<"}";
	}

	return 0;
}

