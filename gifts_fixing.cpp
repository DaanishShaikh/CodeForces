#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        i64 minc=LONG_LONG_MAX;
        i64 mino=LONG_LONG_MAX; 
        vector<i64>c(n);
        for(int i=0; i<n ; i++){
            cin >> c[i];
            minc=min(minc,c[i]);
        }
        vector<i64>o(n);
        for(int i=0 ; i<n ; i++){
            cin >> o[i];
            mino=min(mino,o[i]);
        }
        cout<<"minc="<<minc<<endl<<"mino="<<mino<<endl;
        i64 count=0;
        for(int i=0 ; i<n ; i++){
            if(c[i]!=minc && o[i]!=mino){
                cout<<"count1="<<count<<endl;
                count+=min(c[i]-minc,o[i]-mino);
                c[i]-=min(c[i]-minc,o[i]-mino);
                o[i]-=min(c[i]-minc,o[i]-mino);
                cout<<"count1end="<<count<<endl;
            }
            if(c[i]>minc && o[i]==mino){
                cout<<"count2="<<count<<endl;
                count+=c[i]-minc;
                cout<<"count2end="<<count<<endl;
            }
            if(c[i]==minc && o[i]>mino){
                cout<<"count3="<<count<<endl;
                count+=o[i]-mino;
                cout<<"count3end="<<count<<endl;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}