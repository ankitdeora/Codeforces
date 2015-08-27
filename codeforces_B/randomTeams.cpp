/*
In this problem we need to find the nCr value
to find nCr we have 4 approaches
1. To use the basic formula !n/!(n-r)*!r but this may run in to overflow because of individual calculation of factorial values
2. To use the property of nCr = C(n-1,r) + C(n-1,r-1). This will be implemented by recursion
3. To build Pascal Triangle using 2-D array (will require n^2 space complexity)
4. Reduced form of the basic formula nCr = n*(n-1)*....r times/!r
*/
#include <iostream>
#include <cmath>
#include <stdint.h>

using namespace std;

uint64_t fact(uint64_t);
uint64_t nCr(uint64_t,uint64_t);

int main(int argc, char const *argv[])
{

	uint64_t n = 0;
	uint64_t m = 0;
	cin>>n>>m;

	uint64_t Kmin = 0;  // K is the number of friends pair
	uint64_t Kmax = 0;

	if(m==n) cout<<"0 0"<<endl;
	else
	{
		Kmax = nCr(n-(m-1),2);

		uint64_t h = n/m;
		uint64_t r = n%m;
		Kmin = (m-r)*nCr(h,2) + r*nCr(h+1,2); // understand this by making diagram
		cout<<Kmin<<" "<<Kmax<<endl;
		//still changes required check the last submission
	}
	/*else
	{
		Kmax = nCr(n-(m-1),2);
		Kmin = n-m;
		cout<<Kmin<<" "<<Kmax<<endl;		
	}*/
	
	return 0;
}

uint64_t fact(uint64_t n)
{
	return (n==1)||(n==0)?1:n*fact(n-1);
}

uint64_t nCr(uint64_t n,uint64_t r)
{
	if(n<r) return 0;
	if(r>n/2) r = n-r;

	uint64_t num = 1;
	for(uint64_t i=0;i<r;i++)
	{
		num*=n;
		n--;
	}
	return num/fact(r);
}