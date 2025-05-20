#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

vector<ll> sieve(ll n) {
    vector<bool> isPrime(n + 1, true);
    vector<ll> primes;

    isPrime[0] = isPrime[1] = false; 

    for (ll i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}






int  main()
{
    ll n ; 
    while( cin >> n && n!=0)
    {
        vector<ll>v = sieve(n) ;

        for(auto x:v){
            cout<< x << " " ;
        }
        cout << endl;
    }

}