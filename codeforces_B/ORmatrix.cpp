#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int R,C;
	cin>>R>>C;

	int* B = new int[R*C];
	int* A = new int[R*C];
	
	int flag = true;
	for(int i=0;i<R;i++)
		for(int j=0;j<C;j++)
		{
			cin>>*(B+i*C+j);
			*(A+i*C+j) = -1;	
		}

	for(int i=0;i<R;i++)
		for(int j=0;j<C;j++)
		{
			if(*(B+i*C+j)==0)
			{
				for(int p=0;p<C;p++)
					*(A+i*C+p) = 0;
				for(int q=0;q<R;q++)
					*(A+q*C+j) = 0;
			}
		}

	for(int i=0;i<R;i++)
		for(int j=0;j<C;j++)
		{
			bool flag1,flag2;
			if(*(B+i*C+j)==1)
			{
				int p;
				for(p=0;p<C;p++)
				{
					if(*(A+i*C+p)==0) continue;
					else break;
				}	
					
				if(p==(C-1)) flag1 =false;

				int q;
				for(q=0;q<R;q++)
				{
					if(*(A+q*C+j)==0) continue;
					else break;
				}
				if(q==(R-1)) flag2 = false;
			}
			flag = flag1&&flag2;
		}
	
	if(flag)
	{
		cout<<"YES"<<endl;
		for(int x=0;x<R;x++)
		{
			for(int y=0;y<C;y++)
			{
				cout<<*(A+x*C+y)<<" ";
			}
			cout<<endl;
		}
	}
	else cout<<"NO"<<endl;
		


	return 0;
}