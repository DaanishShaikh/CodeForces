#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int count=0;
    int temp=a;
    while(true){
        if(temp%10==b||temp%10==0){
            break;
        }
        count++;
        temp+=a;
        
    }
    cout<<count+1<<endl;
    return 0;
}