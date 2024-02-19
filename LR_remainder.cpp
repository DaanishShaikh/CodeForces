#include<bits/stdc++.h>
using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     for(long long i=0 ; i<t ; i++){
//         long long n;
//         cin>>n;
//         long long m;
//         cin>>m;
//         long long a[n];
//         for(long long j=0 ; j<n ; j++){
//             cin>>a[j];
//         }
//         string s;
//         cin>>s;
//         long long product=1;
//         for(long long k=0 ; k<n ; k++){
//                 product*=a[k];
//             }

//             long long templ,tempr;
//         for(long long j=0, k=n-1 ; j<n&&k>=0 ; j++,k--){
//             cout<<product%m<<' ';
//             if(s[j]=='L'){
//                 templ=a[j];
//                 a[j]=0;
//                 product/=templ;
//             }
//             if(s[j]=='R'){
//                 tempr=a[k];
//                 a[k]=0;
//                 product/=tempr;
//             }
//         }
        
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    for(long long i = 0; i < t; i++) {
        long long n;
        cin >> n;
        long long m;
        cin >> m;
        long long a[n];
        for(long long j = 0; j < n; j++) {
            cin >> a[j];
        }
        string s;
        cin >> s; // Read the entire string at once
        long long product = 1;
        for(long long k = 0; k < n; k++) {
            product *= a[k];
        }
        long long templ, tempr;
        for(long long j = 0, k = n - 1; j < n && k >= 0; j++, k--) {
            cout << product % m << ' ';
            if(s[j] == 'L') {
                templ = a[j];
                a[j] = 0;
                product /= templ;
            }
            if(s[j] == 'R') {
                tempr = a[k];
                a[k] = 0;
                product /= tempr;
            }
        }
        cout << endl;
    }
    return 0;
}
