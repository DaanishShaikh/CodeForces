#include<iostream>
using namespace std;
int main(){
int temp;
bool flag;
int count=0;
int stud_num;
cin>>stud_num;
int seconds;
cin>>seconds;
char a[stud_num];
for(int i=0 ; i<stud_num ; i++){
    cin>>a[i];
}

for(int z=0 ; z<seconds ; z++){
    for(int j=0 ; j<stud_num-1; j++){
    if((a[j]=='B')&&(a[j+1]=='G')){
        swap(a[j],a[j+1]);
        j++;
