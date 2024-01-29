#include<iostream>
using namespace std;

int main(){
    int x, y;
    int n[5][5];

    for(int j = 0; j < 5; j++){
        for(int i = 0; i < 5; i++){
            cin >> n[j][i];
            if(n[j][i] == 1){
                x = i;
                y = j;
                break;
            }
        }
    }

    x = 2 - x;
    y = 2 - y;
    if (x < 0){
        x = -x;
    }
    if(y < 0){
        y = -y;
    }    

    cout << x + y;

    return 0;
}
