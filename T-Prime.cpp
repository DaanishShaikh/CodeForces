#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int y = 10000000;
    vector<bool> prime(y + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= y; i++) {
        prime[i] = true;
    }

    for (int i = 2; (long long)i * i <= y; i++) {
        if (prime[i] && (long long)i * i <= y) {
            for (int j = i * i; j <= y; j += i) {
                prime[j] = false;
            }
        }
    }

    while (n-- != 0) {
        long long x;
        cin >> x;
        long long r = (long long)sqrt(x);

        if (prime[r] && (long long)r * r == x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
