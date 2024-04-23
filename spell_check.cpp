#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<int,int>occ;
        for(int i=0 ; i<s.size() ; i++){
            occ[s[i]]++;
        }
        if(occ['T']==1){
            if(occ['i']==1){
                if(occ['m']==1){
                    if(occ['u']==1){
                        if(occ['r']==1){
                            if(s.size()==5){
                                cout<<"YES"<<endl;
                            } else {
                                cout<<"NO"<<endl;
                            }
                        } else {
            cout<<"NO"<<endl;
        }
                    } else {
            cout<<"NO"<<endl;
        }
                } else {
            cout<<"NO"<<endl;
        }
            } else {
            cout<<"NO"<<endl;
        }
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}