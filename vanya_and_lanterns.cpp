#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l;
    cin>>l;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    // for(int i=0 ; i<n ; i++){
    //     cout<<v[i];
    // }
    sort(v.begin(),v.end());
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<' ';
    }
    float max=v[0];
    for(int i=0 ; i<n ; i++){
        if(i==n-1){break;}
        
            // cout<<"max1="<<max<<' ';
        }
        else if(v[i+1]-v[i]>max){
            max=v[i+1]-v[i];
            // cout<<"max2="<<max<<' ';
        }
        // cout<<"max3="<<max<<endl;
        if(l-v[n-1]>max){
            v[n-1]=max;
        }
        if(max==317950*2){
            int test=i;
            int num=v[i];
            break;
    cout<<"test="<<test<<"num="<<num;
        }
    }
    if(v[0]!=0){
            if(v[0]>max){
                max=v[0]+1;
            }
    if(max==v[0]){
        cout<<max;
    }
    else{
        cout<<max/2;
    }

    return 0;
}