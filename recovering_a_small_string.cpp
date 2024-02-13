#include<iostream>
using namespace std;
int main(){
    pair<char,int> latinpair[26]={{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6},
        {'g', 7}, {'h', 8}, {'i', 9}, {'j', 10}, {'k', 11}, {'l', 12},
        {'m', 13}, {'n', 14}, {'o', 15}, {'p', 16}, {'q', 17}, {'r', 18},
        {'s', 19}, {'t', 20}, {'u', 21}, {'v', 22}, {'w', 23}, {'x', 24},
        {'y', 25}, {'z', 26}};
    int t;
    cin>>t;
    
    for(int i=0; i<t ; i++){
        int znum=0,rem=0;
        int num;
        cin>>num;
        if(num<=28){
                num-=2;
               cout<<"aa"<<latinpair[num-1].first<<endl;
        }
        else{
           znum=num/26;
           rem=num%26;
           if(znum==1){
            cout<<'a'<<latinpair[num-28].first<<'z'<<endl;
           }
           if(znum==2){
            cout<<latinpair[num-53].first<<"zz"<<endl;
           }
           if(num==78){
            cout<<"zzz";
           }
        }
    }
return 0;
}