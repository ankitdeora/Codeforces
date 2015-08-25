#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	int x=0;
	int y=0;
	int z=0;
	int sum_x=0;
	int sum_y=0;
	int sum_z=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		sum_x+=x;
		sum_y+=y;
		sum_z+=z;
	}
	if(sum_x==0&&sum_y==0&&sum_z==0) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}