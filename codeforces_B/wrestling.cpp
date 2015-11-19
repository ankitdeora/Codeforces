#include <bits/stdc++.h>
using namespace std;
long long int lexicographically(long long int arr[],long long int crr[],long long int j,long long int k)
{
     long long int i,l=0,m=0;
    while(l < j && m < k)
    {
        if(arr[l]>crr[m])
            return 1;
        else if(arr[l]<crr[m])
            return 2;
        else{
            l++;
            m++;
        }
    }
    if(j>k)
        return 1;
    else if(j<k)
        return 2;
    else
        return 3;
}
int main()
{
    long long int n,arr[1000000],crr[1000000],i=0,j=0,k=0,temp,sumfirst=0,sumsecond=0,last;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> temp;
        last=temp;
        if(temp>0)
        {
            arr[j]=temp;
            sumfirst+=temp;
            j++;
        }
        else
        {
            crr[k]=(-1*temp);
            sumsecond+=(temp*(-1));
            k++;
        }
    }
    
    if(sumfirst > sumsecond)
        cout << "\nfirst";
    else if(sumfirst < sumsecond)
        cout << "\nsecond";
    else 
    {
        long long int ans = lexicographically(arr,crr,j,k);
        if(ans==1)
            cout << "\nfirst";
        else if(ans==2)
            cout << "\nsecond";
        else
        {
            if(last>0)
                cout << "\nfirst";
            else if(last<0)
                cout << "\nsecond";
        }
    }
    return 0;
}