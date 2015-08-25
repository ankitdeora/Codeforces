#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char s[100];
	cin>>s;
	int i = 0;
	bool flag_h = false;
	bool flag_e = false;
	bool flag_l = false;
	bool flag_ll = false;
	bool flag_o = false;
	while(s[i]!='\0') 
		{
			if(s[i]=='h')
			{
				i++;
				flag_h = true;
			}
			if(flag_h&&(s[i]=='e'))
			{
				i++;
				flag_e = true;
			}
			if(flag_e&&(s[i]=='l'))
			{
				if(flag_l)
				{
					flag_ll = true;
				}
				i++;
				flag_l = true;
			}
			if(flag_l&&(s[i]=='l'))
			{
				i++;
				flag_ll = true;
			}
			if(flag_ll&&(s[i]=='o'))
			{
				flag_o = true;
				cout<<"YES"<<endl;
				break;
			}
			i++;
		}
		if(s[i]=='\0') cout<<"NO"<<endl;

	//cout<<size<<endl;
	return 0;
}