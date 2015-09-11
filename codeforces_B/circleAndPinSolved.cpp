#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	double r=0;
	double x1=0;
	double y1=0;
	double x2=0;
	double y2=0;

	cin>>r>>x1>>y1>>x2>>y2;

	double dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	//cout<<dist<<endl;
	int steps = ceil(dist/(2*r));
	cout<<steps<<endl;

	return 0;
}
