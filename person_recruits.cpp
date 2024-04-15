#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=0;
    unordered_map<int, int>occ;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        if(x>0){
            occ[1]+=x;
        }
        if(x==-1){
            if(occ[1]>0){
                occ[1]--;
            } else {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}