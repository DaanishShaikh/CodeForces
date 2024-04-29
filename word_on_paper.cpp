#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        queue<char>q;
        for(int i=0 ; i<64 ; i++){
            char x;
            cin >> x;
            if(x!='.'){
                q.push(x);
            }
        }
        while(!q.empty()){
            cout<<q.front();
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}