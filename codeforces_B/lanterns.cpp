#include <iostream>
#include <stdint.h>
#include <algorithm>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
	int n = 0;
	uint64_t l = 0;

	cin>>n>>l;

	uint64_t* arr;

	arr = new uint64_t[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);

	double left_offset = static_cast<double>(arr[0]);
	double right_offset = static_cast<double>(l-arr[n-1]);

	uint64_t maxVal = 0;
	for(int j=0;j<n-1;j++)
	{
		if((arr[j+1]-arr[j])>maxVal) maxVal = arr[j+1]-arr[j];
	}

	//cout<<left_offset<<","<<maxVal<<","<<right_offset<<endl;

	//double f_left_offset = static_cast<float>(left_offset);
	//double f_right_offset = static_cast<float>(right_offset);

	double radius = 0.0;
	radius = static_cast<double>(maxVal)/2.0;

	//cout<<left_offset<<","<<radius<<","<<right_offset<<endl;

	radius = (radius>left_offset)?radius:left_offset;
	radius = (radius>right_offset)?radius:right_offset;

	cout.precision(15);
	cout<<radius<<endl;

	return 0;
}