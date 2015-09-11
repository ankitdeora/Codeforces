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
	double lambda = 0;

	cin>>r>>x1>>y1>>x2>>y2;

	if(((int)x2==(int)x1)&&((int)y2==(int)y1))
		cout<<'0'<<endl;
	else
	{
		int steps = 0;
		double theta = atan2(y2-y1,x2-x1);
		double tx = 0;
		double ty = 0;
		double diff_tx = 0;
		double diff_x2 = 0;
		double diff_ty = 0;
		double diff_y2 = 0;
		do
		{
			tx = x1 + 2*r*cos(theta);
			ty = y1 + 2*r*sin(theta);	
			diff_tx = abs(tx-x1);
			diff_x2 = abs(x2-x1);	
			diff_ty = abs(ty-y1);
			diff_y2 = abs(y2-y1);
			
			steps++;
/*
			cout<<"new round"<<endl;
			cout<<x1<<","<<y1<<endl;
			cout<<tx<<","<<ty<<endl;
			cout<<x2<<","<<y2<<endl;
*/
			x1 = tx;
			y1 = ty;
			if((abs(diff_tx-diff_x2)<0.00000001)&&(abs(diff_ty-diff_y2)<0.00000001)) break;

		}while(((diff_tx-diff_x2)<0.00001)&&((diff_ty-diff_y2)<0.00001));
		
		cout<<steps<<endl;
	
	}
		return 0;
}
