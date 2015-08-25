#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m=0;
	int n=0;
	cin>>m>>n;
	int min=0;
	min = m<n?m:n;
	if(min%2==0) cout<<"Malvika"<<endl;
	else cout<<"Akshat"<<endl;
	return 0;
}