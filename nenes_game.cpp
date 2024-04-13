#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
    int k, q;
    cin >> k >> q;
    vector<int>sequence(k);
    for(int i=0 ; i<k ; i++){
        cin >> sequence[i];
    }
    vector<int>tt(q);
    for(int i=0 ;i<q ;i++){
        cin >> tt[i];
    }
    for(int i=0 ; i<q ; i++){
        if(tt[i]>=sequence[0]){
            cout<<sequence[0]-1<<' ';
        } else {
            cout<<tt[i]<<' ';
        }
    }
    cout<<endl;
    }
    return 0;
}