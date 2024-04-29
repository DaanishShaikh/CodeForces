#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int>v(n+1);
        for(int i=1 ; i<=n ; i++){
            cin >> v[i];
        }
        bool answeristwo=0;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                if(v[j]==i && v[i]==j){
                answeristwo=1;
                break;
            }
            }
        }
        if(answeristwo){
            cout<<2<<endl;
        } else {
            cout<<3<<endl;
        }
    }
    return 0;
}