#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int,int>occ;
    vector<int>teams(n);
    for(int i=0 ; i<n ; i++){
        cin >> teams[i];
        occ[teams[i]]++;
    }
    stack<int>ones;
    stack<int>twos;
    stack<int>threes;
    for(int i=0 ; i<teams.size() ; i++){
        if(teams[i]==1){
            ones.push(i);
        }
        else if(teams[i]==2){
            twos.push(i);
        }
        else if(teams[i]==3){
            threes.push(i);
        }
    }
    if(occ[1] && occ[2] && occ[3]){
        int minocc=min(occ[1],occ[2]);
        minocc=min(minocc,occ[3]);
        cout<<minocc<<endl;
        for(int i=0 ; i<minocc ; i++){
            cout<<ones.top()+1<<' ';
            ones.pop();
            cout<<twos.top()+1<<' ';
            twos.pop();
            cout<<threes.top()+1<<endl;
            threes.pop();
        }
    } else {
        cout<<'0'<<endl;
    }
    return 0;
}