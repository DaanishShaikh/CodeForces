#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>colours(n);
    for(int i=0 ; i<n ;i++){
        cin >> colours[i];
    }
    vector<int>values(n);
    for(int i=0 ; i<n ; i++){
        cin >> values[i];
    }
    vector<int>sortindices;
    vector<int>duplicate(n);
    copy(values.begin(),values.end(),duplicate.begin());
    sort(duplicate.begin(),duplicate.end());
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(values[i]==duplicate[j]){
                sortindices.push_back(j);
                duplicate[j]=-1;
                values[i]=-1;
                break;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<<sortindices[i]<<' ';
    }
    return 0;
}