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
// Function: primeFactorization (Sieve version)
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
