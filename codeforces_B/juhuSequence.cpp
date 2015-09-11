#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y;
	cin>>x>>y;

	int n=0;
	cin>>n;

	int arr[7] = {0};
	arr[1] = x;
	arr[2] = y;

	for(int i=3;i<7;i++)
	{
		arr[i] = arr[i-1] - arr[i-2];
	}
	arr[0] = arr[6];

	int index = n%6;
	int largeNum = 1000000007;
	int result = arr[index]%largeNum;
	if(result<0) result = largeNum + result;

	cout<<result<<endl;
	return 0;
}