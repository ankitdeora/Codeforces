#include <iostream>
using namespace std;

bool almostLucky(int,int);
int main(int argc, char const *argv[])
{
	int n=0;
	cin>>n;

	int A_lucky = 4;
	int B_lucky = 7;

	if(almostLucky(n,A_lucky)||almostLucky(n,B_lucky)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}

bool almostLucky(int n,int lucky)
{
	
	if(lucky>n) return false;

	if(n%lucky==0) return true;

	int a = 10*lucky + 4;
	int b = 10*lucky + 7;
	
	if(almostLucky(n,a)||(almostLucky(n,b))) return true;
	return false;
}