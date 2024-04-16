#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int remaining=240-b;
    int sum=0;
    int ans=0;
    for(int i=1 ; i<=a ; i++){
        sum+=5*i;
        ans++;
        if(sum>remaining){
            ans--;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}