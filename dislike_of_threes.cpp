#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 1; v.size() < n; i++) {
            if(i % 3 != 0 && i % 10 != 3) {
                v.push_back(i);
            }
        }
        cout << v[n - 1] << endl;
    }
    return 0;
}
