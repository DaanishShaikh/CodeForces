#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    i64 n;
    cin >> n;
    if(n==1){
        cout<<1<<endl<<1<<endl;
        return;
    }
    bool odd=0;
    // if(n%2){
    //     odd=1;
    //     n--;
    // }
    int x=-1,y=-1;
    if(n%2==0){
    for(int i=0 ; i<=32 ; i++){
        for(int j=0 ; j<=32 ; j++){
            if(pow(2,i)-pow(2,j)==n){
                x=i;
                y=j;
                cout<<"x="<<x<<' '<<"y="<<y<<endl;
                break;
            }
        }
    }
    
    
        vector<int>ans(x+1);
        ans[y]=-1;
        ans[x]=1;
        for(int i=0 ; i<ans.size() ; i++){
            if(i!=y&&i!=x){
                ans[i]=0;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    } else {
        n++;
        for(int i=0 ; i<32 ; i++){
        for(int j=0 ; j<32 ; j++){
            if(pow(2,i)-pow(2,j)==n){
                x=i;
                y=j;
                cout<<"x="<<x<<' '<<"y="<<y<<endl;
                break;
            }
        }
    }
        vector<int>ans(x+1);
        ans[y]=-1;
        ans[x]=1;
        for(int i=0 ; i<ans.size() ; i++){
            if(i!=y&&i!=x){
                ans[i]=0;
            }
        }
        ans[0]=-1;
        cout<<ans.size()<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;

    }
    // else {
    //     for(int i=0 ; i<y-1 ; i++){
    //         ans.push_back(0);
    //     }
    //     ans.push_back(-1);
    //     for(int i=0 ; i<x-y ; i++){
    //         ans.push_back(0);
    //     }
    //     ans.push_back(1);
    //     cout<<ans.size()<<endl;
    //     for(int i=0 ; i<ans.size() ; i++){
    //         cout<<ans[i]<<' ';
    //     }
    //     cout<<endl;
    // }
    if(x==-1||y==-1){
        if(n==1){
        cout<<1<<endl<<1<<endl;
        return;
    }
    bool odd=0;
    // if(n%2){
    //     odd=1;
    //     n--;
    // }
    int x=-1,y=-1;
    if(n%2==0){
    for(int i=0 ; i<=32 ; i++){
        for(int j=0 ; j<=32 ; j++){
            if(pow(2,i)+pow(2,j)==n){
                x=i;
                y=j;
                cout<<"x="<<x<<' '<<"y="<<y<<endl;
                break;
            }
        }
    }
    
    
        vector<int>ans(x+1);
        ans[y]=1;
        ans[x]=1;
        for(int i=0 ; i<ans.size() ; i++){
            if(i!=y&&i!=x){
                ans[i]=0;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    } else {
        n++;
        for(int i=0 ; i<32 ; i++){
        for(int j=0 ; j<32 ; j++){
            if(pow(2,i)+pow(2,j)==n){
                x=i;
                y=j;
                cout<<"x="<<x<<' '<<"y="<<y<<endl;
                break;
            }
        }
    }
        vector<int>ans(x+1);
        ans[y]=1;
        ans[x]=1;
        for(int i=0 ; i<ans.size() ; i++){
            if(i!=y&&i!=x){
                ans[i]=0;
            }
        }
        ans[0]=-1;
        cout<<ans.size()<<endl;
        for(int i=0 ; i<ans.size() ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;

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