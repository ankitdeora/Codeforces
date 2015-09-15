#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	char s[101],t[101];

	cin>>s>>t;

	int len_s = strlen(s);
	int len_t = strlen(t);

	//cout<<len_s<<","<<len_t<<endl;
	if(len_t>len_s) cout<<"need tree"<<endl;
	else if(len_s==len_t)
	{

		int* s_arr = new int[len_s];
		int* t_arr = new int[len_t];

		int i=0;
		while(s[i]!='\0')
		{
			s_arr[i] = s[i]-'a';
			t_arr[i] = t[i]-'a';
			i++;
		}
		
		sort(s_arr,s_arr+len_s);
		sort(t_arr,t_arr+len_t);

		bool flag = true;
		for(int j=0;j<len_s;j++)
		{
			if(s_arr[j]!=t_arr[j])
			{
				flag = false;
				break;
			}
		}

		if(flag) cout<<"array"<<endl;
		else cout<<"need tree"<<endl;
	}
	else
	{
		int x=0;
		int prev_index = 0;
		int index = 0;
		bool bothRequired = false;
		bool Entered = false;
		char* ch;

		while(t[x]!='\0')
		{
			ch = strchr(s+prev_index,t[x]);	
			if(ch)
			{
				index = (ch - s)/sizeof(char);
				s[index] = '$';
				//if(index<prev_index)
				//{
				//	bothRequired = true;
				//}
				//prev_index = index;
			}
			else
			{
				ch = strchr(s,t[x]);
				if(ch)
				{
					index = (ch - s)/sizeof(char);
					s[index] = '$';
				}
				else
				{
					Entered = true;
					cout<<"need tree"<<endl;
					break;
				}
			}

			if(index<prev_index)
			{
				bothRequired = true;
			}
			prev_index = index;			
			x++;
		}
		if(!Entered)
		{
			if(bothRequired) cout<<"both"<<endl;
			else cout<<"automaton"<<endl;
		}

	}
	return 0;
}