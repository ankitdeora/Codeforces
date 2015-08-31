#include <iostream>
#include <string>

using  namespace std;

int main(int argc, char const *argv[])
{
	int n=0;
	int m=0;

	cin>>n>>m;

	string* A;
	string* B;
	string* notes;

	A = new string[m];
	B = new string[m];
	notes = new string[n];

	for(int i=0;i<m;i++)
	{
		cin>>A[i]>>B[i];
	}

	for(int j=0;j<n;j++)
	{
		cin>>notes[j];
	}

	for(int k=0;k<n;k++)
	{
		int index = 0;
		for(int x=0;x<m;x++)
		{
			if(notes[k].compare(A[x])==0 || notes[k].compare(B[x])==0) index = x;
		}
		string smallerStr;
		smallerStr = A[index].length()<=B[index].length()?A[index]:B[index];
		cout<<smallerStr<<" ";
	}


	return 0;
}