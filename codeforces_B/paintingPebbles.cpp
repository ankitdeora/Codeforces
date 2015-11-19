#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n_piles,n_colors;
	cin>>n_piles>>n_colors;

	int* arr = new int[n_piles];
	for (int i = 0; i < n_piles; ++i)
	{
		cin>>arr[i];
	}

	int max_val = *max_element(arr,arr+n_piles);
	int min_val = *min_element(arr,arr+n_piles);
	
	if(n_colors<(max_val-min_val)) cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		int* unifiedArr = new int[max_val];
		int color = 1;
		for (int i = 0; i < max_val; ++i)
		{
			if(i<=min_val) unifiedArr[i]=color;
			else
			{
				color++;
				unifiedArr[i] = color;
			}
		}	

		for (int i = 0; i < n_piles; ++i)
		{
			for(int j=0;j<arr[i];j++)
			{
				cout<<unifiedArr[j]<<" ";
			}		
			cout<<endl;
		}	
	}

	return 0;
}