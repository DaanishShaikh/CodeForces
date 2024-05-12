#include<bits/stdc++.h>
using namespace std;

using i64=long long;
bool is_sorted(string v){
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]=='1'){
            for(int j=i ; j<v.size() ; j++){
                if(v[j]=='0'){
                    return 0;
                }
            }
        }
    }
    return 1;
}

void solve(){
    
    string s;
    cin >> s;
    if(is_sorted(s)){
        cout<<1<<endl;

        return;
    }
    vector<int>zeroes;
    int sum=1;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='0'){
            zeroes.push_back(i);
        }
    }
    if(zeroes.size()==1){
        if(zeroes[0]==0){
            cout<<1<<endl;
            return;
        } else {
            cout<<2<<endl;
            return;
        }
    }
    if(zeroes.size()&&zeroes[0]!=0){
        sum++;
    }
    for(int i=1 ; i<zeroes.size() ; i++){
        if(zeroes[i]!=1+zeroes[i-1]&&(i=zeroes.size()-1)&&zeroes[i]==s.size()-1){
            sum+=1;
        }
        else if(zeroes[i]!=1+zeroes[i-1]){
            sum+=2;
        }
    }
    cout<<sum<<endl;
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