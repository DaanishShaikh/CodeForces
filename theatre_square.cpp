/*1 2 3 4 5 6 7*/
#include<bits/stdc++.h>
using namespace std;
using i64=long long;
int main(){
    i64 n, m, a;
    cin>>n>>m>>a;
    i64 count=0,length=0,breadth=0;
    if(n%a==0){
        length=n/a;
    }
    else{
        length=(n/a)+1;
    }
    if(m%a==0){
        breadth=m/a;
    }
    else{
        breadth=(m/a)+1;
    }
    i64 area=length*breadth;
    cout<<area<<endl;
    return 0;
} 