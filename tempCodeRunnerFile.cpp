#include<bits/stdc++.h>
using namespace std;
vector<int>houses;
int main(){
    int a,b;
    cin >> a >> b;
    for(int i = 0 ; i<b ; i++){
        int x;
        cin >> x;
        houses.push_back(x);
    }
    int ans=houses[0]-1;
    for(int i=1 ; i<b ; i++){
        if(houses[i]>=houses[i-1]){
            ans+=houses[i]-houses[i-1];
        } else {
            ans+=a-houses[i];
            ans+=houses[i]-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}