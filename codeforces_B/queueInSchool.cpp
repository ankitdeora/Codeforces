//this question can also be done without recursion by simply using a for loop running t times

#include <iostream>
using namespace std;

void arrangeStr(char*,int);
void swap(char*,char*);

int main(int argc, char const *argv[])
{
	int n=0;
	int t=0;
	char str[51];

	cin>>n>>t;
	cin>>str;

	arrangeStr(str,t);
	cout<<str<<endl;

	return 0;
}

void swap(char* a,char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void arrangeStr(char* a,int t)
{
	if(t==0) return;
	else
	{
		int i=0;
		while(a[i]!='\0')
		{
			if(a[i]=='B'&&a[i+1]=='G')
			{
				swap(&a[i],&a[i+1]);
				i+=2;
				continue;
			}
			i++;
		}
		arrangeStr(a,t-1);
	}
}

