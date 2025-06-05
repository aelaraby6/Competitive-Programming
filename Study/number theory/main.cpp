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

// You can test the functions here if needed:
// int main() {
//     ll n = 36;
//     vector<ll> divs = getDivs(n);
//     cout << "Divisors of " << n << ": ";
//     for (ll d : divs) cout << d << " ";
//     cout << "\n";
//     cout << n << (isPrime(n) ? " is Prime\n" : " is NOT Prime\n");
//     vector<ll> pf = primeFactorization(n);
//     cout << "Prime factors: ";
//     for (ll f : pf) cout << f << " ";
//     cout << "\n";
// }
