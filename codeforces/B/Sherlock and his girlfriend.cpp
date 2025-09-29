#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

const ll BIG = 4e18;

// o(sqrt(n))

vector<ll> getDivisors(ll n) {
    vector<ll> divs;

    for (ll i = 1; i * i  <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if ((n / i) != i) divs.push_back(n / i);
        }
    }
    return divs;
}

// o(sqrt(n))
vector<ll> primeFactorization(ll n) {
    vector<ll> primes;
        for (ll i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                primes.push_back(i);
                n/=i;
            }
        }

    if (n!=1) primes.push_back(n);
    return primes;
}

// o(n log n)
vector<bool> sieve(ll n) {
    vector<bool> is_prime(n+1,true);
    vector<ll> divide(n+1);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            divide[i] = i;
            for (ll j = 2*i; j <= n; j += i) {
                is_prime[j] = false;
                if (divide[j] == 0) {
                    divide[j] = i;
                }
            }
        }
    }
    return is_prime;
}

vector<ll>p_fact(ll n,vector<ll>&divs ) {
    vector<ll> res;

    while (n > 1) {
        ll p = divs[n];
        res.push_back(p);
        n /= p;
    }
    return res;
}


int main() {
    Fast;

    int n ;  cin>>n;

    vector<bool> is_prime = sieve(n + 1);

    if (n + 1 > 3) {
        cout<<2<<endl;
    }
    else {
        cout<<1<<endl;
    }

    for (int i = 2 ; i <= n + 1 ; i++) {
      if (is_prime[i] && (n + 1) > 3) {
          cout<<2<<" ";
      }
        else {
            cout<<1<<" ";
        }
    }

    return 0;
}
