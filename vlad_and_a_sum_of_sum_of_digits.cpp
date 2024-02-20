#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
vector<int>a(n);
        for(int j=0; j<n; j++){
            a[j]=j+1;
        }
        int multiple(n/9);
        int ten=10;
        for(int j=0 ; j<n ; j++){
            multiple[j]=11+j;
        }
        int count=1;
        for(int j=0 ; j<n ; j++){
            if(a[j]<=9){
                a[j]=j+1;
            }
            else if(a[j]==(9*count)+1){
                for
                count++;
            }
        }
    }
}