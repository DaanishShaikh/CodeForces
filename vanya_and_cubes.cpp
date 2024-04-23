#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    int count=0;
    for(int i=1 ; sum<n ; i++){
        for(int j=1; j<=i ; j++){
            sum+=j;
        }
        count++;
    }
    if(sum>n){
    cout<<sum<<endl;
    cout<<count-1<<endl;}
    else {
        cout<<count<<endl;
    }
    return 0;
}