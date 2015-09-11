#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[1001];
	cin>>str;
	int len = strlen(str);

	int k=0;
	cin>>k;

	int w[26];
	for(int i=0;i<26;i++)
	{
		cin>>w[i];
	}

	int maxVal = *max_element(w,w+26);
	int sumPad = 0;
	for(int j=1;j<k+1;j++)
	{
		sumPad+=(j+len)*maxVal;
	}

	int strSum = 0;
	for(int x=0;x<len;x++)
	{
		int alphabetIndex = str[x] - 'a';
		strSum+=(x+1)*w[alphabetIndex];
	}

	int totalSum = strSum + sumPad;
	cout<<totalSum<<endl;



	return 0;
}