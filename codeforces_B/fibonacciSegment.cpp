#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int* arr = new int[n];
	for (int i = 0; i < n; ++i)	cin>>arr[i];

	int maxCount = 0;
	int count = 0;
	bool prevFlag = false;
	for(int j=n-1;j>=2;j--)
	{

		if(arr[j]==arr[j-1]+arr[j-2])
		{
			prevFlag = true;
		}

		if(prevFlag)
		{
			count++;
			if(count>maxCount) maxCount = count;
			prevFlag = false;
		}
		else count=0;
	}
	if(n>=2) cout<<maxCount+2<<endl;
	else cout<<maxCount+1<<endl;
	return 0;
}