#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c,x2,x3,x4,x6,x7,x8;
	cin>>a>>x2>>x3;
	cin>>x4>>b>>x6;
	cin>>x7>>x8>>c;

	int k = (x2+x3+x4+x6+x7+x8)/2;
	a = k-x2-x3;
	b = k-x4-x6;
	c = k-x7-x8;

	cout<<a<<" "<<x2<<" "<<x3<<endl;
	cout<<x4<<" "<<b<<" "<<x6<<endl;
	cout<<x7<<" "<<x8<<" "<<c<<endl;
	return 0;
}