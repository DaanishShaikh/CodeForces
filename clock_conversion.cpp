#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int hours=0;
        if(s[0]=='1'){
            hours+=10;
        } else if(s[0]=='2'){
            hours+=20;
        }
        if(s[1]=='1'){
            hours+=1;
        } else if(s[1]=='2'){
            hours+=2;
        } else if(s[1]=='3'){
            hours+=3;
        }else if(s[1]=='4'){
            hours+=4;
        }else if(s[1]=='5'){
            hours+=5;
        }else if(s[1]=='6'){
            hours+=6;
        }else if(s[1]=='7'){
            hours+=7;
        }else if(s[1]=='8'){
            hours+=8;
        }else if(s[1]=='9'){
            hours+=9;
        }else if(s[1]=='0'){
            hours+=0;
        }
        //cout<<"hours="<<hours<<endl;
        if(hours<12 && hours!=0){
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<" AM"<<endl;
            //cout<<endl;
        } 
        else if(hours==0){
            cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;
        }
        else {
        if(hours>12){
            hours-=12;
        }
        s.erase(s.begin());
        s.erase(s.begin());
        if(hours>=10){
        cout<<hours;
        } else {
            cout<<'0'<<hours;
        }
        for(int i=0 ; i<s.size() ; i++){
            cout<<s[i];
        }
        cout<<" PM"<<endl;
        //cout<<endl<<endl;
        }
    }
    return 0;
}