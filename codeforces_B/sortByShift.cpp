#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int* arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int x = 0;
	int y = 0;

	while(arr[x]<=arr[x+1])
	{
		x++;
		if(x==(n-1)) break;
	}

	if(x!=(n-1))
	{
		y = x+1;
		if(y!=(n-1))
		{
			while(arr[y]<=arr[y+1])
			{
				y++;
				if(y==(n-1)) break;
			}
		}
			
	}	

	if(x==(n-1)) cout<<"0"<<endl;
	else
	{
		if(arr[0]<arr[n-1]) cout<<"-1"<<endl;
		else
		{
			if(y==(n-1)) cout<<n-x-1<<endl;
			else cout<<"-1"<<endl;	
		}
		
	}

	return 0;
}