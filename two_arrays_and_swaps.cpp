#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
    int a,b;
    cin >> a >> b;
    vector<int>one(a);
    vector<int>two(a);
    for(int i=0 ; i<a ; i++){
        cin >> one[i];
    }
    for(int i=0 ; i<a ; i++){
        cin >> two[i];
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    int i=0;
    int j=a-1;
    while(b--){
        if(one[i]<=two[j]){
            swap(one[i++],two[j--]);
        } else {
            break;
        }
    }
    int sum=0;
    for(int i=0 ; i<a ; i++){
        sum+=one[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}