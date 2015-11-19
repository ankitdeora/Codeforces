#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;

	int* arr = new int[m]();

	for(int i=0;i<m;i++) cin>>arr[i];
	int current = 1;
	
	sort(arr,arr+m);
	bool threeConsDirty = false;

	if(arr[0]==1||arr[m-1]==n)
	{
		cout<<"NO"<<endl;	
	}
	else
	{
		for(int j=0;j<m-2;j++)
		{
			if(arr[j+1]==(arr[j]+1)&&arr[j+2]==(arr[j+1]+1))
			{
				threeConsDirty = true;
				break;
			}	
		}
		if(threeConsDirty) cout<<"NO"<<endl;
		else cout<<"YES"<<endl; 
	}
	return 0;
}