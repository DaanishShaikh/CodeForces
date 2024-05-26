#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n;
        cin>>n;
        int N=1e5+10;
        int a[N];
        int fl=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==1)fl=1;
        }
        if(fl){
            cout<<"Yes\n";
            return;
        }    
        else{
            sort(a+1,a+1+n);
            vector<int> b;
            for(int i=2;i<=n;i++){
                if(a[i]%a[1])b.push_back(a[i]);
            }
            sort(b.begin(),b.end());
            n = b.size();
            for(int j=1;j<n;j++){
                if(b[j]%b[0]){
                    fl=1;
                    break;
                }
            }
            if(!fl){
                cout<<"Yes\n";
                return;
                }
            else 
            {
                cout<<"No\n";
                return;
            }
        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}