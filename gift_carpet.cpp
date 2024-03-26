#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, m;
        cin>>n>>m;
        stack<char>s;
        s.push('a');
        s.push('k');
        s.push('i');
        s.push('v');
        vector<vector<char>>c(n,vector<char>(m));
        int temp=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin>>c[i][j];
            }
        }
        bool flag=0;
        for(int i=0 ; i<n ; i++){
            if(flag){break;}
            for(int j=0 ; j<m ; j++){
                if(s.size()==0){
                    flag=1;
                    break;
                }
                if((c[j][i]==s.top())&&(i>=temp)&&(s.size()!=0)){
                    cout<<"c["<<j<<"]["<<i<<"]="<<c[j][i]<<' '<<"s.top="<<s.top()<<' '<<"s.size="<<s.size()<<' '<<"temp="<<temp<<endl;
                    temp=i;
                    temp++;
                    s.pop();
                    break;
                }
            }
        }
        if(s.size()==0){
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}