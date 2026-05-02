#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// using u128 = unsigned__int128;
// using i128 = __int128;

void solve() {
   int n;
   cin >> n;
   int first=-1, last=-1;

   vector<int> a(2*n);

   for (int i = 0; i < 2*n; i++) {
       cin >> a[i];

       if(a[i] == 0 && first == -1) {
           first = i;
       } else if(a[i] == 0) {
           last = i;
       }
   }

   cout<<"first:"<<first<<" last:"<<last<<'\n';

   vector<int> ans1;
   vector<int> ans2;

   int i=first, j=1;

   if(first>0){
        while (((i-j)>=0) &&
               ((i+j)<2*n) &&
               (a[i+j]==a[i-j]))
        {
            ans1.push_back(a[i+j]);
            j++;
        }
   }

   i=last, j=1;

   if(last<2*n-1){
        while (((i-j)>=0) &&
               ((i+j)<2*n) &&
               (a[i+j]==a[i-j]))
        {
            ans2.push_back(a[i+j]);
            j++;
        }
   }

   vector<int> ans3;

   i=first;
   j=last;
   int k=1;

   cout<<"i:"<<i<<" j:"<<j<<'\n';

   if(i+k < 2*n && j-k >= 0)
       cout<<a[i+k]<<' '<<a[j-k]<<'\n';

   if(first>0 && last<2*n-1){

        while ((i+k<2*n) &&
               (j-k>=0) &&
               (i+k<=j-k) &&
               (a[i+k]==a[j-k]))
        {
            ans3.push_back(a[i+k]);
            k++;
        }

        k=1;

        while((i-k>=0) &&
              (j+k<2*n) &&
              (a[i-k]==a[j+k]))
        {
            ans3.push_back(a[i-k]);
            k++;
        }
   }

   cout<<"ans1:"<<'\n';

   for(int x: ans1) {
       cout<<x<<' ';
   }

   cout<<"\nans2:"<<'\n';

   for(int x: ans2) {
       cout<<x<<' ';
   }

   cout<<"\nans3:"<<'\n';

   if(i+k < 2*n && j-k >= 0)
       cout<<a[i+k]<<' '<<a[j-k]<<'\n';

   for(int x: ans3) {
       cout<<x<<' ';
   }

   cout<<'\n';

   return;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    int z=1;

    while (t--) {

        cout<<"testcase:"<<z<<'\n';
        solve();
        z++;
    }

    return 0;
}