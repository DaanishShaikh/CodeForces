#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int,int>occ;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin >> v[i];
        occ[v[i]]++;
    }
    int ones=occ[1];
    int twos=occ[2];
    int threes=occ[3];
    int fours=occ[4];
    int sum=0;
    sum+=fours;
                //cout<<"after adding fours="<<sum<<endl;
    if(occ[1]<=occ[3]){
        sum+=threes;
        ones=0;
        threes=0;
                // cout<<"after adding ones to the threes="<<sum<<endl;
                // cout<<"remaining ones="<<ones<<endl;
                // cout<<"remaining twos="<<twos<<endl;
                // cout<<"remaining threes="<<threes<<endl;

    } else {
        sum+=threes;
        ones-=threes;
        threes=0;
                // cout<<"after adding ones to the threes="<<sum<<endl;
                // cout<<"remaining ones="<<ones<<endl;
    }
    if(twos*2>=4){
    if((twos*2)%4){
        sum+=(twos*2)/4;
        twos=1;
                // cout<<"2 or more twos were added if not divisible by 4="<<sum<<endl;
    } else {
        sum+=(twos*2)/4;
        twos=0;
                //cout<<"2 or more twos were added if divisible by 4="<<sum<<endl;

    }
    }
    //cout<<"twos="<<twos<<endl;
    if(twos&&ones==0){
        sum+=1;
    }
    if(ones){
        if(twos&&ones>=2){
        sum+=1;
        twos=0;
        ones-=2;
        }
        if(twos&&ones==1){
            sum+=1;
            twos=0;
            ones=0;
        }
            if(ones%4){
                sum+=ones/4;
                sum++;
            } else {
                sum+=ones/4;
            }
        
    }
    cout<<sum<<endl;
    return 0;
}