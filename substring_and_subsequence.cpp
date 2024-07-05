#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    string a;
    cin >> a;
    string b;
    cin >> b;
    int ans = a.size() + b.size();

		for (int st = 0; st < b.size(); st++) {
			int ptr = st;
			for (int i = 0; i < a.size(); i++) {
				if (ptr < b.size() && a[i] == b[ptr]){ 
                    ptr++;
                }
			}

			ans = min(ans, (int)a.size() + (int)b.size() - ptr + st);
		}

		cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }

    return 0;
}