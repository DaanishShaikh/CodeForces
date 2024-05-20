#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum1 = 0;
    int sum2 = 0;
    unordered_map<char, int> occ;
    occ['N'] = 0;
    occ['S'] = 0;
    occ['E'] = 0;
    occ['W'] = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'N') {
            sum1++;
        } else if (s[i] == 'S') {
            sum1--;
        } else if (s[i] == 'E') {
            sum2++;
        } else if (s[i] == 'W') {
            sum2--;
        }
        occ[s[i]]++;
    }

    if (sum1 % 2 || sum2 % 2) {
        cout << "NO" << endl;
        return;
    }

    int nd = (occ['N'] - occ['S']) / 2;
    for (int i = 0; i < s.size() && nd > 0; i++) {
        if (s[i] == 'N') {
            s[i] = 'R';
            nd--;
        }
    }
    nd = (occ['N'] - occ['S']) / 2;
    for (int i = 0; i < s.size() && nd > 0; i++) {
        if (s[i] == 'N') {
            s[i] = 'H';
            nd--;
        }
    }

    int ed = (occ['E'] - occ['W']) / 2;
    for (int i = 0; i < s.size() && ed > 0; i++) {
        if (s[i] == 'E') {
            s[i] = 'R';
            ed--;
        }
    }
    ed = (occ['E'] - occ['W']) / 2;
    for (int i = 0; i < s.size() && ed > 0; i++) {
        if (s[i] == 'E') {
            s[i] = 'H';
            ed--;
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]!='R'&&s[i]!='H'){
            s[i]='R';
        }
    }
    for (auto c : s) {
        cout << c;
    }
    cout << endl;
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
