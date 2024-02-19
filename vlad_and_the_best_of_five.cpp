#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for (int i=0 ; i<t ; i++){
        string s;
        cin>>s;
        int countA=0, countB=0;
        for(int j=0 ; j<5 ; j++){
            if(s[j]=='A'){
                countA++;
            }
            else{
                countB++;
            }
        }
        if(countA>countB){
            cout<<'A'<<endl;
        }
        else{
            cout<<'B'<<endl;
        }
    }
    return 0;
}