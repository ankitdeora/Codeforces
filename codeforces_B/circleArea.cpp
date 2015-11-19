#include <iostream>
#include <cmath>
#include <algorithm>

# define PI           3.14159265358979323846

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin>>N;

	double* arr = new double[N];
	for(int i=0;i<N;i++) cin>>arr[i];
	sort(arr,arr+N);
	double redArea = 0;
	if(N%2==0)
	{
		for(int i=N-1;i>=0;i--)
		{
			redArea+= pow(arr[i],2)*pow(-1,i+1);
		}
		redArea*=PI;
	}
	else
	{
		for(int i=N-1;i>=0;i--)
		{
			redArea+= pow(arr[i],2)*pow(-1,i+2);
		}
		redArea*=PI;	
	}
	cout.precision(15);
	cout<<redArea<<endl;

	/*double y = 123456789.45678910;
	cout.precision(20);		//this does not require <iomanip> header
	cout<<y<<endl;*/
	return 0;
}
