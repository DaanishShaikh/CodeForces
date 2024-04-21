#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i =0 ; i < n ; i++){
        cin >> v[i];
    }
    int sum=0;
    for(int i=0 ; i<k ; i++){
        sum+=v[i];
    }
    int minindex=0;
    int minheight=INT_MAX;
    for(int i=0 ; i<n-k+1 ; i++){
        //cout<<"minheight="<<minheight<<endl<<"sum="<<sum<<endl<<"v["<<z<<"]="<<v[z]<<endl;
        if(sum<minheight){
            minheight=sum;
            minindex=i;
        }
        sum+=v[i+k];
        sum-=v[i];
    }
    cout<<minindex+1<<endl;
    return 0;
}