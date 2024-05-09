/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
#define int long long
    int tt;
    cin >> tt;
    while(tt--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        vector<int>v(n);
        for(int i= 0 ; i<n ; i++)
        {
            cin>>v[i];
        }        
        sort(v.begin(),v.end(),greater<int>());
        if(k%m==0){
            int sum=0;
            int count=0;
        for(int i=n-k/m ; i<n ; i++){
            v[i]+=count;
            sum+=v[i]*m;
            count+=m;
        }
            cout<<sum<<endl;
        } else {
            int sum=0;
            int count=0;
        for(int i=n-((k/m)+1); i<n ; i++){
            //cout<<"v["<<i<<"]="<<v[i]<<endl;
            //cout<<"count="<<count<<endl;
            if(i==n-((k/m)+1)){
                v[i]+=count;
                sum+=v[i]*(k%m);
                count+=k%m;
                //cout<<"sum="<<sum<<endl;
            } else {
            v[i]+=count;
            sum+=v[i]*m;
            count+=m;
            }
        }
            cout<<sum<<endl;
        }
    }
    return 0; 
}