#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        int l;
        cin >> l;
        string s;
        cin >> s;

        int indStrtB = 0;
        int indEndB = 0;

        for(int j = 0; j < s.length(); j++) {
            if(s[j] == 'B') {
                indStrtB = j;
                break;
            }
        }

        for(int j = s.length() - 1; j >= 0; j--) {
            if(s[j] == 'B') {
                indEndB = j;
                break;
            }
        }

        if(l == 1 && s[0] == 'W')
            cout << 0 << endl;
        else
            cout << indEndB - indStrtB + 1 << endl;
    }

    return 0;
}
