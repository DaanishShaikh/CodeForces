// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin>>tt;
//     while(tt--){
//         int n;
//         cin>>n;
//         int anscount=0;
         vector<vector<int>>v(n,vector<int>(3));
        int count=0;
        for(int j=0; j<n ; j++){
        for(int i=0 ; i<3 ; i++){
            cin>>v[j][i];
            cout<<v[j][i]<<endl;
        }
        cout<<endl;
        }
        for(int j=0; j<n ; j++){
        for(int i=0 ; i<3 ; i++){
//             cout<<v[j][i];
//         }
//         cout<<endl;
//         }

//         for(int j=0 ; j<n ; j++){
//         for(int k=0 ; k<3 ; k++){
//             if(v[j][k]==1){
//                 count++;
//             }
//         }
//         if(count>=2){anscount++;}
//         }
        
//         cout<<anscount<<endl;
        
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        int anscount = 0;
        vector<vector<int>> v(n, vector<int>(3)); // Correct way to initialize a 2D vector
        int count = 0;
        for(int j = 0; j < n; j++) {
            for(int i = 0; i < 3; i++) {
                cin >> v[j][i];
            }
        }
        for(int j = 0; j < n; j++) {
            for(int i = 0; i < 3; i++) {
                cout << v[j][i] << " ";
            }
            cout << endl;
        }
        for(int j = 0; j < n; j++) {
            count = 0; // Reset count for each row
            for(int k = 0; k < 3; k++) {
                if(v[j][k] == 1) {
                    count++;
                }
            }
            if(count >= 2) {
                anscount++;
            }
        }
        
        cout << anscount << endl;
    }
    return 0;
}
