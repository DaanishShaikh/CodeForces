#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
int first=a[0];
int morecount=0,lesscount=0;
int max=a[0], min=a[0];
for(int i=0; i<n ; i++){
    cin>>a[i];
}
for(int j=1 ; j<=n ; j++){
    
    if(min>a[j]){
        min=a[j];
        lesscount++;
    }
    else if(max<a[j]){
    max=a[j];
        morecount++;
    }

}
cout<<morecount+lesscount<<endl;
return 0;
}
