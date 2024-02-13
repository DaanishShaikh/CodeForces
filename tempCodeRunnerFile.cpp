#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        if (n <= 26) {
            if (n == 3) {
                cout << "aaa" << endl;
            } else {
                int x = n - 2 - 1 + 97;
                char z = static_cast<char>(x);
                cout << "aa" << z << endl;
            }
        } else if (n > 52) {
            int x = n + 97 - 52 - 1;
            char z = static_cast<char>(x);
            cout << z << "zz" << endl;
        } 
}
    