#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int count=0;
        int temp=n;
        vector<int>nums;
        while(temp){
            temp/=10;
            count++;
        }
        int ten=10;
        while(count--){
            if(n%ten){
            nums.push_back(n%ten);
            }
            n-=n%ten;
            // cout<<"n="<<n<<endl;
            ten*=10;
        }
        cout<<nums.size()<<endl;
        for(int i=0 ; i<nums.size() ; i++){
            cout<<nums[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}