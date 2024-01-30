#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[100];
int first=a[0];
int morecount=0,lesscount=0;
for(int i=0; i<n ; i++){
    cin>>a[i];
}
for(int j=0 ; j<n ; j++){
    for(int k=0; k<=j ; k++){
    if(a[k]>a[k+1]){
        lesscount++;
    }
    else if(a[k]<a[k+1]){
        morecount++;
    }
}

}
cout<<morecount<<endl<<lesscount<<endl;
return 0;
}