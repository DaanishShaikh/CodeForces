#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<string>s;
        if(n%2==0){
            for(int i=0 ; i<n/2 ; i++){
                if(i%2==0){
                    s.push_back("AA");
                }
                else if(i%2==1){
                    s.push_back("BB");
                }
            }
            cout<<"YES"<<endl;
            for(const string& element : s){
                cout << element;
            }
            cout<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}