#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


vector<char> segmentedSieve(long long L, long long R) {
    // generate all primes up to sqrt(R)
    long long lim = sqrt(R);
    vector<char> mark(lim + 1, false);
    vector<long long> primes;
    for (long long i = 2; i <= lim; ++i) {
        if (!mark[i]) {
            primes.emplace_back(i);
            for (long long j = i * i; j <= lim; j += i)
                mark[j] = true;
        }
    }

    vector<char> isPrime(R - L + 1, true);
    for (long long i : primes)
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            isPrime[j - L] = false;
    if (L == 1)
        isPrime[0] = false;
    return isPrime;
}



int main()
{
    ll a, b;
    while (cin >> a >> b) {
        vector<ll> v;

        vector<char> is_prime = segmentedSieve(a, b);
        for (ll i = 0; i < is_prime.size(); ++i) {
            if (is_prime[i]) {
                v.push_back(i + a); 
            }
        }


        int n = v.size();

        int si = 0;
        int ei = 1;
        int diff = v[ei] - v[si];
    
        for (int i = 1; i < n - 1; i++) {
            int cdiff = v[i + 1] - v[i];
    
            if (cdiff == diff) {
                ei++;
            } else {
                if (ei - si + 1 >= 3) {
                    for (int j = si; j <= ei; j++) {
                        cout << v[j] << " ";
                    }
                    cout << endl;
                }
                si = i;
                ei = i + 1;
                diff = v[ei] - v[si];
            }
        }
    
        
        if (ei - si + 1 >= 3) {
            for (int j = si; j <= ei; j++) {
                cout << v[j] << " ";
            }
            cout << endl;
        }
    
        
    }

    return 0;
}
