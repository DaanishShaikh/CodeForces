/*not solved*/
// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;

// // Function to generate divisors from prime factors
// vector<int> generateDivisors(const vector<pair<int, int>>& factors) {
//     vector<int> divisors = {1}; // Start with 1 as a divisor
//     for (const auto& factor : factors) {
//         int prime = factor.first;
//         int  = factor.second;
//         int size = divisors.size();
//         for (int i = 0; i < size; ++i) {
//             int divisor = divisors[i];
//             for (int j = 1; j <= ; ++j) {
//                 divisor *= prime;
//                 divisors.push_back(divisor);
//             }
//         }
//     }
//     return divisors;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> primes;
//     int x, y;
//     while (n--) {
//         cin >> x >> y;
//         primes.push_back(make_pair(x, y));
//     }
//     vector<int> divisors = generateDivisors(primes);
    
//     const int MOD = 1000000007;
//     long long sum = 0; // Using long long to avoid overflow
//     for (int divisor : divisors) {
//         sum = (sum + static_cast<long long>(pow(divisor, 69))) % MOD;
//     }
//     cout << sum << endl;
//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate (base^exp) % mod using modular exponentiation
long long modularPower(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// Function to calculate the sum of divisors raised to the power 'k' modulo MOD
long long sumOfDivisorsPowerK(const vector<pair<int, int>>& factors, int k, int MOD) {
    long long sum = 1;
    for (const auto& factor : factors) {
        int prime = factor.first;
        int power = factor.second;
        long long term = 1;
        for (int i = 0; i <= power; ++i) {
            term *= (1 + modularPower(prime, k * i, MOD)); // sum of powers series
            term %= MOD;
        }
        sum *= term;
        sum %= MOD;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> primes;
    int x, y;
    while (n--) {
        cin >> x >> y;
        primes.push_back(make_pair(x, y));
    }

    const int MOD = 10000007;
    int k = 69;
    long long result = sumOfDivisorsPowerK(primes, k, MOD);
    cout << result << endl;

    return 0;
}
