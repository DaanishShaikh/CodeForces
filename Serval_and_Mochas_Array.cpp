#include<bits/stdc++.h>
using namespace std;
int n,T,a[10005];
int gcd(int a, int b){
    int mini=min(a,b);
    for(int i=2 ; i<=a ; i++){
        if(a%i==0&&b%i==0){
            return i;
        }
    }
    return 1;
}
int main(){
	for (cin>>T; T; T--){
		cin>>n; int flag=0;
		for (int i=1; i<=n; i++)cin>>a[i];
		for (int i=1; i<=n; i++)
			for (int j=i+1; j<=n; j++) flag |=gcd(a[i],a[j])<=2;
		cout<<(flag?"Yes":"No")<<endl;
	}
}