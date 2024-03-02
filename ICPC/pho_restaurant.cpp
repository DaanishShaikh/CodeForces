#include <bits/stdc++.h>
using namespace std;
bool check(const vector<int> &v) {
    auto prev = v.begin(); // Iterator pointing to the beginning of the vector
    for (auto it = v.begin() + 1; it != v.end(); ++it) {
        if (*prev != *it) {
            return false; // If consecutive elements are not equal, return false
        }
        prev = it; // Move the 'prev' iterator to the current position
    }
    return true; // If all consecutive elements are equal, return true
}


int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    vector<string> v(n, "100"); // Initialized with "100" strings

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v[i] = s;
    }

    for (int i = 0; i < n; i++) {
        int onecount = 0, zerocount = 0;
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == '1') {
                onecount++;
            }
            if (v[i][j] == '0') {
                zerocount++;
            }
        }
        p[i].first = onecount;
        p[i].second = zerocount;
        cout << onecount << ' ' << zerocount << endl;
        cout << "p[" << i << "].first = onecount = " << p[i].first << ' '
             << "p[" << i << "].second = zerocount = " << p[i].second << endl;
    }
    int max_one=p[0].first, max_zero=p[0].second;
    for(int i=0;i<p.size();i++){
        if(p[i].first>max_one){
            max_one=p[i].first;
        }
        if(p[i].second>max_zero){
            max_zero=p[i].second;
        }
    }
    // cout<<"max_one="<<max_one<<' '<<"max_zero="<<max_zero<<endl;
    // int max_one_i=0, max_zero_i=p[p.size()-1].second;
    // for(int i=0;i<p.size();i++){
    //     if(p[i].first==max_one){
    //         max_one_i=i;
    //         break;
    //     }
    // }
    for(int i=p.size();i>0;i--){
        if(p[i].second==max_zero){
            max_zero_i=i;
            break;
        }
    }

    cout<<"max_one_i="<<max_one_i<<' '<<"max_zero_i="<<max_zero_i<<endl;

    vector<int>a(5);
    a={1,1,1,1,1};
    cout<<"check="<<check(a)<<endl;

for (int i = 0; i < v.size(); i++) {
    if (check(v[i]) != 1) {
        for (int j = 0; j < v[i].size(); j++) {
            if (j != max_one_i && j != max_zero_i) {
                if (v[i][j] == '1') {
                    v[max_one_i].push_back('1');
                    v[i].erase(v[i].begin() + j); // Correct usage of erase()
                }
            }
        }
    } else {
        continue;
    }
}

    for(int i=0 ; i<v.size() ; i++){
        for(int j=0 ; j<v[i].size() ; j++){
            cout<<v[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
