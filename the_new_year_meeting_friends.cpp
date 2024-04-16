#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int distances[n];
    for(int i=0 ; i<3 ; i++){
        cin >> distances[i];
    }
    sort(distances,distances+n);
    int sum=0;
    sum+=distances[2]-distances[1];
    sum+=distances[1]-distances[0];
    cout<<sum<<endl;
    return 0;
}