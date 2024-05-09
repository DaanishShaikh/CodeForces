#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    int ansa = 1;
    int ansb = 1;
    unordered_map<char, int> occa;
    unordered_map<char, int> occb;
    for (int i = 0; i < a.size(); i++) {
        occa[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++) {
        occb[b[i]]++;  
    }
    pair<char, int> sizes[] = {{'L', 1000}, {'M', 100}, {'S', 10}}; 
    for (int i = 0; i < 3; i++) {
        if (a[a.size() - 1] == sizes[i].first) {
            ansa *= sizes[i].second;
        }
        if (b[b.size() - 1] == sizes[i].first) {
            ansb *= sizes[i].second;
        }
    }
    if (ansa == 1000) {
        ansa += occa['X']; 
    } else if (ansa == 10) {
        ansa -= occa['X'];
    }
    if (ansb == 1000) {
        ansb += occb['X']; 
    } else if (ansb == 10) {
        ansb -= occb['X']; 
    }
    if (ansa > ansb) {
        cout << '>' << endl;
    } else if (ansa < ansb) {
        cout << '<' << endl;
    } else {
        cout << '=' << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
