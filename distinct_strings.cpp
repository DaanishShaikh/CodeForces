#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        pair<char,int> latinpair[26]={{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0},
        {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0},
        {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0},
        {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0},
        {'y', 0}, {'z', 0}};
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0 ; i<s.size() ; i++ ){
            for(int j=0 ; i<26;j++){
                if(s[i]==latinpair[j].first){
                    latinpair[j].second=1;
                    break;
                }
            }
        }
        int sum=0;
        for(int i=0; i<26 ; i++){
            sum+=latinpair[i].second;
            //cout<<"latinpair["<<i<<"].second="<<latinpair[i].second<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}