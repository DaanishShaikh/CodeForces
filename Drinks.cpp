#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[100];
    int sum=0;
    for(int i=0 ; i<n ; i++){
        cin>>p[i];
        sum+=p[i];
    }
    double answer=static_cast<float>(sum)/n;
    cout<<fixed<<setprecision(12)<<answer<<endl;   
    
return 0;
}