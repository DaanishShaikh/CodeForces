#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++){
            cin>>v[i];
        }
        else {
            sort(v.begin(),v.end());
            int count=0, maxcount=0;
            for(int i=0 ; i<n ; i++){
                for(int j=i ; j<n ; j++){
                    if(j==n-1){
                        count++;
                        break;
                    }
                    if(v[j]==v[j+1]){
                        count++;
                    } else {
                        count++;
                        i=j;
                        break;
                    }
                    //cout<<"maxcount="<<maxcount<<"count="<<count<<"i="<<i<<"j="<<j<<endl;
                }
                maxcount=max(maxcount,count);
                count=0;
            }
            //cout<<"maxcount="<<maxcount<<endl;
            if(maxcount==n/2||v.size()-maxcount==n/2){
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}