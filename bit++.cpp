// #include<bits/stdc++.h>
// using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     string ss;
//     vector<string>s[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>ss;
//         s[i].push_back(ss);
//     }
//     int count=0;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0 ; j<s[i].size()-1 ; j++){
//             if(s[i][j]=='+'&&s[i][j+1]=='+'){
//                 count++;
//             }
//             else{continue;}
//             if(s[i][j]=='-'&&s[i][j+1]=='-'){
//                 count--;
//             }
//             else{continue;}
//         }
//     }
//     cout<<count<<endl;
//     return 0;
//  }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ss;
    vector<string> s[n];
    
    for (int i = 0; i < n; i++) {
        cin >> ss;
        s[i].push_back(ss);
    }
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < s[i].size(); k++) { // Iterate over the inner vector
            for (int j = 0; j < s[i][k].size() - 1; j++) {
                if (s[i][k][j] == '+' && s[i][k][j+1] == '+') {
                    count++;
                    j++; // Move to skip the next character since we've already counted it.
                } else if (s[i][k][j] == '-' && s[i][k][j+1] == '-') {
                    count--;
                    j++; // Move to skip the next character since we've already counted it.
                }
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
