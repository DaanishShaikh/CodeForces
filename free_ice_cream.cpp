#include<bits/stdc++.h>
using namespace std;

using i64=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i64 ans1=0;
    i64 tt;
    cin >> tt;
    i64 x;
    cin>>x;
    cin.ignore();
    while(tt--){
        
        string s;
        getline(cin,s);
        bool positive=0;
        bool negative=0;
        if(s[0]=='+'){
            positive=1;
        } else if(s[0]=='-'){
            negative=1;
            //cout<<"neg"<<endl;
        }
        s.erase(s.begin(),s.begin()+1);
        i64 num=stoi(s);
        //cout<<num<<endl;
        //cout<<"x="<<x<<endl;
        if(positive){
            x+=num;
        } 
        if(negative){
            if(num<=x){
                x-=num;
            } else {
                ans1++;
            }
        }
        //cout<<"x="<<x<<endl;
    }
    cout<<x<<' '<<ans1<<endl;
    return 0;
}