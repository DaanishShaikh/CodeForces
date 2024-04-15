#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    vector<int>difficulty(b);
    for(int i=0 ; i<b ; i++){
        cin >> difficulty[i];
    }

    sort(difficulty.begin(),difficulty.end());
    int ans=10000;
    int diff=0;
    for(int i=0 ; i<b ; i++){
        if(i==b-a+1){
            break;
        }
        diff=difficulty[i+a-1]-difficulty[i];
        //cout<<"difficulty["<<i+a-1<<"]="<<difficulty[i+a-1]<<"difficulty["<<i<<"]="<<difficulty[i]<<endl;
        //cout<<"diff="<<diff<<endl;
        ans=min(ans,diff);
    }
    // for(int i=0 ; i<b ; i++){
    //     cout << difficulty[i] << ' ';
    // }
    //cout<<endl;
    cout<<ans<<endl;
    return 0;
}