#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<vector<int>>v(n);
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<3 ; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    double ans=INT_MAX;
    for(int i=0 ; i<n ; i++){
        double a,b;
        a=x-v[i][0];
        b=y-v[i][1];
        double speed=(sqrt((a*a) + (b*b)))/v[i][2];
        ans=min(ans,speed);
    }
    cout<<fixed<<setprecision(20)<<ans<<endl;
    return 0;
}