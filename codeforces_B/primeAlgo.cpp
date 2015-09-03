#include <iostream>
using namespace std;

void sieve(bool*);

int main()
{
	int n=0;
	cin>>n;
	bool notPrime[1000000] = {false};
	notPrime[0]=true;
	notPrime[1]=true;
	sieve(notPrime);
	for(int i=0;i<n;i++)
	{
		if(!notPrime[i]) 
			cout<<i<<",";
	}
	return 0;
}

void sieve(bool* arr)
{
	for(int j=2;j<1000;j++)
	{
		if(!arr[j])
		{
			for(int k=j*j;k<1000000;k+=j)
				arr[k]=true;
		}
	}
}