#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[100];
	cin>>str;

	int size = 0;
	while(str[size]!='\0') size++;

	for(int i=0;i<size;i+=2)
	{
		int min = str[i];
		int minKey = i;
		for(int j=i;j<size;j+=2)
		{
			if(str[j]<min)
			{
				min = str[j];
				minKey = j;
			}
		}
		str[minKey] = str[i];
		str[i] = min;
	}
	cout<<str<<endl;


	return 0;
}