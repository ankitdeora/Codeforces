#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	cin>>n;
	int* h;
	int* g;

	h = new int[n]();
	g = new int[n]();

	for(int i=0;i<n;i++)
	{
		cin>>h[i]>>g[i];
	}

	int* h_count = new int[n]();
	int* g_count = new int[n]();

	int count[100001] = {0};
	
	for(int q=0;q<n;q++)
	{
		count[h[q]]++;
	}

	for(int j=0;j<n;j++)
	{
		h_count[j] = count[g[j]];
		g_count[j] = n-1-h_count[j];
		h_count[j]+=(n-1); 
	}

	for(int p=0;p<n;p++)
	{
		cout<<h_count[p]<<" "<<g_count[p]<<endl;
	}
	
	return 0;
}