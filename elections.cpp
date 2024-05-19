#include<bits/stdc++.h>
using namespace std;

using i64=long long;
int solveSingle(int best, int other1, int other2)
{
	return max(0, max(other1, other2) + 1 - best);
}

void solve(){
    
        int a, b, c;
		cin >> a >> b >> c;
		cout<<solveSingle(a,b,c)<<' '<<solveSingle(b,a,c)<<' '<<solveSingle(c,a,b)<<endl;
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