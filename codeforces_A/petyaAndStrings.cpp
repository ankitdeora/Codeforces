#include<iostream>
using namespace std;

int main()
{
	char Astr[100];
	char Bstr[100];

	cin>>Astr;
	cin>>Bstr;

	int i = 0;
	while(Astr[i]!='\0') 
		{
			int A_ascii = int(Astr[i]);
			int B_ascii = int(Bstr[i]);

			if(A_ascii<97) A_ascii+=32;
			if(B_ascii<97) B_ascii+=32;

			if(A_ascii<B_ascii)
			{
				cout<<"-1"<<endl;
				break;
			}
			else if(A_ascii>B_ascii)
			{
				cout<<"1"<<endl;
				break;
			}
			i++;
		}
		if(Astr[i]=='\0') cout<<"0"<<endl;

	return 0;
}