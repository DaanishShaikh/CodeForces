#include<bits/stdc++.h>
using namespace std;
vector<int>houses;
int main(){
    long long a,b;
    cin >> a >> b;
    for(int i = 0 ; i<b ; i++){
        int x;
        cin >> x;
        houses.push_back(x);
    }
    long long ans=houses[0]-1;
    for(int i=1 ; i<b ; i++){
        if(houses[i]>=houses[i-1]){
            ans+=houses[i]-houses[i-1];
        } else {
            ans+=((a-houses[i-1])+1)+(houses[i]-1);
        }
    }
    cout<<ans<<endl;
    return 0;
}