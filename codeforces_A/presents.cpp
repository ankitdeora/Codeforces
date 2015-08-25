#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	cin>>n;
	int* p;
	p = new int[n+1];

	for(int i=1;i<n+1;i++)
	{
		cin>>p[i]; //p[i] receives gift from i
	}

	int* q;
	q = new int[n+1];

	for(int x=1;x<n+1;x++)
	{
		q[p[x]]=x;
	}
	for(int j=1;j<n+1;j++) cout<<q[j]<<" ";

	return 0;
}