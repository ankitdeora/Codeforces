#include <iostream>
#include <stdint.h>
#include <cmath>
#include <limits>

using namespace std;

void sieve(bool*);

int main(int argc, char const *argv[])
{
	int n=0;
	cin>>n;

	bool notPrime[1000005] = {false};
	notPrime[0]=true;
	notPrime[1]=true;
	sieve(notPrime);

	uint64_t* arr;
	arr = new uint64_t[n];

	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}

	for(int k=0;k<n;k++)
	{
		int mid_n = sqrt(arr[k]);
		//cout<<mid_n<<",";
		if(mid_n==sqrt(arr[k]))
		{
			//mid_n = static_cast<int>(mid_n);
			if(!notPrime[mid_n]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}

	//cout<<std::numeric_limits<double>::epsilon()<<endl;

	return 0;
}

void sieve(bool* arr)
{
	for(int j=2;j<1000;j++)
	{
		if(!arr[j])
		{
			for(int k=j*j;k<1000005;k+=j)
				arr[k]=true;
		}
	}
}