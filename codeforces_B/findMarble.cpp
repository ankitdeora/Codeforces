#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,s,t;
	cin>>n>>s>>t;

	int* arr = new int[n+1];
	bool* onceVisited = new bool[n+1];
	for(int i=1;i<n+1;i++)
	{
		cin>>arr[i];
		onceVisited[i] = false;
	}

	int currentPos = s;
	int shuffleCount = 0;
	while(currentPos!=t)
	{
		if(!onceVisited[currentPos])
		{
			onceVisited[currentPos] = true;
			currentPos = arr[currentPos];
		}
		else break;
		shuffleCount++;
	}
	if(s==t) cout<<"0"<<endl;
	else if(currentPos==t) cout<<shuffleCount<<endl;
	else cout<<"-1"<<endl;
	return 0;
}