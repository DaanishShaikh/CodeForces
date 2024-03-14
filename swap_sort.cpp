#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> aog(n);

    for(int l=0 ; l<n ; l++){
        cin>>a[l];
        aog[l]=a[l];
    }
    