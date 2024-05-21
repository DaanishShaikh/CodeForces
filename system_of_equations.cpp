#include<bits/stdc++.h>
using namespace std;

using i64=long long;

void solve(){
    
    int n, m;
    cin >> n >> m;
    int val = min(n, m);
    int count = 0;
    for (int a = 0; a <= val; a++)
    {
        for (int b = 0; b <= val; b++)
        {
            if ((a * a + b == n) && (b * b + a == m))
                count++;
        }
    }
    cout<<count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}