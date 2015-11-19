#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n,m,l,r,count = 0;
    bool flagArr[1001]={false};
    cin >> n >> m >> l >> r;
    int arrN[n][2],arrM[m][2];
    
    for(int i = 0; i < n; i++){
            cin >> arrN[i][0] >> arrN[i][1];
    }
    
    for(int i = 0; i < m; i++){
            cin >> arrM[i][0] >> arrM[i][1];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            //int diff = arrM[j][1] - arrM[j][0];
            //int p = arrN[i][0] - diff , q = arrN[i][1];
            int wakeIni = arrN[i][0] - arrM[j][1];
            int wakeLast =  arrN[i][1] - arrM[j][0];
            for(int k = wakeIni; k <= wakeLast; k++){
                if(k<=r && k>=l && !flagArr[k]){
                    count++;
                    //cout << arrN[i][0] <<"  "<< arrN[i][1] <<"  "<< arrM[j][0] <<"   "<< arrM[j][1] <<"  K->"<< k <<"   count->"<< count << endl;
                    flagArr[k] = true;
                }
            }       
        }
    }
    cout << count << endl;
    return 0;
}