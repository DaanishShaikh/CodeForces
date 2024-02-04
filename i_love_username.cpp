#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
int first=a[0];
int morecount=0,lesscount=0;

for(int i=0; i<n ; i++){
    cin>>a[i];
}
int max=a[0], min=a[0];
for(int j=0 ; j<n-1 ; j++){
    
    if(min>a[j+1]){
        min=a[j+1];
        lesscount++;
        // cout<<"min="<<min<<endl;
    }
    else if(max<a[j+1]){
    max=a[j+1];
        morecount++;
        // cout<<"max="<<max<<endl;
    }

}
cout<<morecount+lesscount<<endl;
return 0;
}
