#include <iostream>
using namespace std;

int mod(int);
int main(int argc, char const *argv[])
{
	int arr[5][5];
	
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			cin>>arr[i][j];

	int r = 0;
	int c = 0;
	bool breakFlag = false;

	for(r=0;r<5;r++)
	{
		for(c=0;c<5;c++)
		{
			if(arr[r][c]==1) 
			{
					breakFlag = true;
					break;
		    }
		}
		if(breakFlag) break;
	}


	cout<<mod(r-2)+mod(c-2)<<endl;
	return 0;
}

int mod(int x)
{
	return x>0?x:-x;
}