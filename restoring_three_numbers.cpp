#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>ans;
    vector<int>nums(4);
    for(int i=0 ; i<4 ; i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    ans.push_back(nums[3]-nums[2]);
    ans.push_back(nums[3]-nums[1]);
    ans.push_back(nums[3]-nums[0]);
    for(int i=0 ; i<3 ; i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    return 0;
}