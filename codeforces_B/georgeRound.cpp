#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int m,n,count = 0;
    cin >> m >> n;
    int arrM[m],arrN[n];
    
    for(int i = 0; i < m; i++)
        cin >> arrM[i];

    for(int i = 0; i < n; i++)
        cin >> arrN[i];

    int tempInd = n-1;

    for(int i = m-1; i >= 0 ; i--){
        if(tempInd >= 0 && arrM[i] <= arrN[tempInd]){
            tempInd--;
        }
        else{
            count++;
        }
    }

    cout << count << endl;
    return 0;
}