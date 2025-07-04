// Number Theory Study
// Description: Useful functions for number theory problems

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// --------------------------------------------------
// Function: getDivs
// Purpose: Return all divisors of a number t in O(sqrt(t)) time
// --------------------------------------------------
vector<ll> getDivs(ll t) {
    vector<ll> divs;
    for (ll i = 1; i * i <= t; i++) {
        if (t % i == 0) {
            divs.push_back(i);
            if (i != t / i)
                divs.push_back(t / i);
        }
    }
    return divs;
}

// --------------------------------------------------
// Function: isPrime
// Purpose: Check if a number is prime using the getDivs function
// Note: Not optimal for large numbers; better to use sieve for many queries
// --------------------------------------------------
bool isPrime(ll x) {
    if (x <= 1)
        return false;
    vector<ll> d = getDivs(x);
    return d.size() == 2; // Only 1 and x are divisors
}

// --------------------------------------------------
// Function: primeFactorization
// Purpose: Return prime factorization of a number x
// Time Complexity: O(sqrt(x))
// --------------------------------------------------
vector<ll> primeFactorization(ll x) {
    vector<ll> pf;
    for (ll i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            pf.push_back(i);
            x /= i;
        }
    }
    if (x > 1) {
        pf.push_back(x); // x is prime
    }
    return pf;
}

// --------------------------------------------------
// Optimized sieve for multiple queries
// --------------------------------------------------
const int N = 1e6 + 5;
vector<bool> is_prime(N, true);
vector<int> divs(N); // divs[i] = smallest prime factor of i

// --------------------------------------------------
// Function: sieve
// Purpose: Fills is_prime[] and divs[] (smallest prime factors) in O(N log log N)
// --------------------------------------------------
void sieve() {
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i < N; ++i) {
        if (is_prime[i]) {
            divs[i] = i;
            for (int j = i * 2; j < N; j += i) {
                is_prime[j] = false;
                if (divs[j] == 0) {
                    divs[j] = i;
                }
            }
        }
    }

    // Fill remaining numbers that are prime but > sqrt(N)
    for (int i = 2; i < N; ++i) {
        if (divs[i] == 0)
            divs[i] = i;
    }
}

// --------------------------------------------------
// Function: fastPrimeFactorization
// Purpose: Returns prime factors of n using precomputed divs[]
// Time Complexity: O(log n)
// --------------------------------------------------
vector<int> fastPrimeFactorization(int n) {
    vector<int> factors;
    while (n > 1) {
        int prime = divs[n];
        factors.push_back(prime);
        n /= prime;
    }
    return factors;
}

// --------------------------------------------------
// Function: multiply
// Purpose: Multiply two big integers represented as strings
// Time Complexity: O(n * m)
// --------------------------------------------------
string multiply(string a, string b) {
    if (a == "0" || b == "0") return "0";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<ll> res(a.size() + b.size(), 0);

    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            res[i + j] += (b[i] - '0') * (a[j] - '0');
        }
    }

    for (int i = 0; i < res.size(); i++) {
        if (res[i] >= 10) {
            res[i + 1] += res[i] / 10;
            res[i] %= 10;
        }
    }

    while (!res.empty() && res.back() == 0) {
        res.pop_back();
    }

    reverse(res.begin(), res.end());

    string ans;
    for (auto d : res)
        ans += (d + '0');
    return ans;
}

// --------------------------------------------------
// Function: pre
// Purpose: Precomputes all divisors for numbers from 1 to N
// Time Complexity: O(N log N)
// Usage: divs[x] will contain all divisors of x
// --------------------------------------------------
const int N = 1e6;

vector<int> divs[N + 1];
void pre() {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            divs[j].push_back(i);
        }
    }
}

