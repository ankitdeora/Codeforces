#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int num_techniques;
	cin>>num_techniques;

	int* posArr = new int[num_techniques];
	int* negArr = new int[num_techniques];
	long long int posSum=0,negSum=0;
	int i=0,j=0,count=0;
	bool lastMovePos = false;

	while((i+j)<num_techniques)
	{	int temp;
		cin>>temp;
		if(temp>0)
		{
			posArr[i] = temp;
			posSum+=temp;
			i++;
			lastMovePos = true;
			//cout<<temp<<endl;
		}
		else if(temp<0)
		{
			negArr[j] = abs(temp);
			negSum+=abs(temp);
			j++;
			lastMovePos = false;
			//cout<<"  "<<temp<<endl;
		}
		
	}
	//cout<<posSum<<" "<<negSum<<endl;
	if(posSum>negSum) cout<<"first"<<endl;
	else if(posSum<negSum) cout<<"second"<<endl;
	else if(posSum==negSum)
	{
		int k=0;
		int tempPos = posArr[k];
		int tempNeg = negArr[k];
		while(tempPos==tempNeg)
		{
			k++;
			if(k==i||k==j) break;	
			tempPos = posArr[k];
			tempNeg = negArr[k];
		} 

		if(posArr[k]>negArr[k]) cout<<"first"<<endl;
		else if(posArr[k]<negArr[k]) cout<<"second"<<endl;
		else
		{
			if(lastMovePos) cout<<"first"<<endl;
			else cout<<"second"<<endl;
		}
		//cout<<"tie"<<endl;
	}
	return 0;
}