#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	cin>>n;
	int* h;
	int* g;

	h = new int[n];
	g = new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>h[i]>>g[i];
	}

	int count = 0;
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(k==j) continue;
			if(h[j]==g[k]) count++;
		}
	}
	cout<<count<<endl;
	return 0;
}