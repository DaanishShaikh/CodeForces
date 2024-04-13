#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string x;
    vector<string>s;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        s.push_back(x);
    }
    int sum=0;
    for(int i=0 ; i<n ; i++){
        if(!s[i].find("Tetrahedron")){
            sum+=4;
            //cout<<"s["<<i<<"]="<<s[i]<<endl;
        }
        else if(!s[i].find("Cube")){
            sum+=6;
            //cout<<"s["<<i<<"]="<<s[i]<<endl;
        }
        else if(!s[i].find("Octahedron")){
            sum+=8;
            //cout<<"s["<<i<<"]="<<s[i]<<endl;
        }
        else if(!s[i].find("Dodecahedron")){
            sum+=12;
            //cout<<"s["<<i<<"]="<<s[i]<<endl;
        }
        else if(!s[i].find("Icosahedron")){
            sum+=20;
            //cout<<"s["<<i<<"]="<<s[i]<<endl;
        }        
    }
    cout<<sum<<endl;
    return 0;
}