#include <iostream>
using namespace std;

void swap(char*,char*);

int main(int argc, char const *argv[])
{
	char str[100001];
	cin>>str;
	int size = 0;
	while(str[size]!='\0') size++;
	//cout<<size<<endl;

	int lastDigit = str[size-1] - 48;
	//cout<<lastDigit<<endl;

	int lastEvenKey = -1;

	int i=0;
	while(i!=size)
	{
		int current = str[i] - 48;
		if(current%2==0)
		{
			lastEvenKey = i;
			if(current<lastDigit) break;
		}
		i++;
	}

	if(lastEvenKey!=-1)
	{
		swap(&str[lastEvenKey],&str[size-1]);
		cout<<str<<endl;	
	}
	else cout<<"-1"<<endl;
	
	return 0;
}

void swap(char* a,char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}