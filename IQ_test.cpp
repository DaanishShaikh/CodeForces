#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>numbers(n);
    for(int i=0 ; i<n ; i++){
        cin >> numbers[i];
    }
    vector<pair<vector<int>,int>>hashmap={ { { },0},{ { },0} };
    for(int i=0 ; i<n ; i++){
        if(numbers[i]%2==0){
            hashmap[0].first.push_back(numbers[i]);
            hashmap[0].second++;
        } else {
            hashmap[1].first.push_back(numbers[i]);
            hashmap[1].second++;
        }
    }
    int target=0;
    if(hashmap[0].second==1){
        target=hashmap[0].first[0];
    } else {
        target=hashmap[1].first[0];
    }
    for(int i=0 ; i<n ; i++){
        if(numbers[i]==target){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}