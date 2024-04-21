#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int z;
        cin >> z;
        string n;
        cin >> n;
        set<char> s;
        bool flag = 1; 
        if(z-1){
        for (int i = 1; i < n.size(); i++) {
            if (n[i - 1] != n[i]) {
                s.insert(n[i-1]);
                // cout<<"i="<<n[i-1]<<endl;
            }
            if (s.find(n[i]) != s.end()) { 
                flag = 0; 
                break;
            }
            
        }
        if (flag) { 
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
