/*Accepted*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp, temps;
        int i=0;
        temps=s;
        int count=0;
        int j=n;
        while(j--){
        count++;
        temp=s[i];     
        temps.erase(temps.find(s[i]),1);
        temps.push_back(temp[0]);
        if(temps==s)break;
        //cout<<"i="<<i<<"temp="<<temp<<' '<<"temps="<<temps<<endl;
        i++;
        }
        cout<<count<<endl;
    }
    return 0;
}