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
        int sum=0;
        sort(v.begin(),v.end(),greater<int>());
        for(int i = n-(k%m==0 ? k/m : (k/m)+1) ; i<n ; i++)
        {   //cout<<"v["<<i<<"]="<<v[i]<<endl;
            if(i == n-(k%m==0 ? k/m : (k/m)+1)){
                if(k%m!=0){
                //cout<<"first if v["<<i<<"]="<<v[i]<<endl;
                //cout<<"k%m="<<k%m<<endl;
            sum+=v[i]*(k%m);
            //cout<<"first if sum="<<sum<<"v[i]="<<v[i]<<"v[i]*(k%m)="<<v[i]*(k%m)<<endl;
                } else {
                    sum+=v[i]*m;
                //cout<<"first else sum="<<sum<<endl;
                }
            } else {
                sum+=v[i]*m;
                //cout<<"first else sum="<<sum<<endl;
            }
            for(int j=i+1 ;j<n ; j++){
                if(j == n-(k%m==0 ? k/m : (k/m)+1)+1){
                    if(k%m!=0){
                    v[j]+=k%m;
                    } else {
                        v[j]+=m;
                    }
                } else {
                    v[j]+=m;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0; 
}