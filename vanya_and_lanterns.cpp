#include<bits/stdc++.h>
using namespace std;
vector<double>points;
int main(){
    double n,l;
    cin >> n >> l;
    for(int i=0 ; i<n ; i++){
        int point;
        cin >> point;
        points.push_back(point);
    }
    sort(points.begin(),points.end());
    double diameter=2*max(points[0],l-points[n-1]);
    for(int i=1 ; i<n ; i++){
        diameter=max(diameter,points[i]-points[i-1]);
        //cout<<"diameter"<<i<<"="<<diameter<<endl;
    }
    
    //cout<<"diameter="<<diameter<<endl;
    double radius=diameter/2;
    cout<<fixed<<setprecision(10)<<diameter/2.00<<'\n';
    // for(int i=0 ; i<n ; i++){
    //     cout << points[i]<<' ';
    // }
    return 0;
}