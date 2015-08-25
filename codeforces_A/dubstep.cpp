#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char str[200];
	cin>>str;

	int i=0;
	while(str[i]!='\0')
	{
		bool oneWUBread = false;
		while(((str[i]=='W')&&(str[i+1]=='U'))&&str[i+2]=='B')
		{
			if(i==0)
			{
				i+=3;
				oneWUBread = true;
				continue;	
			}
			if(oneWUBread)
			{
				i+=3;
				continue;
			}
			oneWUBread = true;
			cout<<" ";
			i+=3;

		}
		if(str[i]=='\0') break;
		cout<<str[i];
		i++;
	}
	//cout<<str;
	return 0;
}