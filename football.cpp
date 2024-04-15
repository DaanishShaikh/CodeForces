#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<string,int>occ;
    vector<string>score;
    for(int i=0 ; i<n ; i++){
        string x;
        cin >> x;
        occ[x]++;
        if(find(score.begin(),score.end(),x)==score.end()){
        score.push_back(x);
        }
    }

    int maxi=0;
    string winner;
    //cout<<"map size="<<occ.size()<<endl;
    for(int i=0 ; i<score.size() ; i++){
        if(occ[score[i]]>=maxi){
            //cout<<"score="<<occ[score[i]]<<endl;
            winner=score[i];
            maxi=occ[score[i]];
        }
    }
    cout<<winner<<endl;
    return 0;
}