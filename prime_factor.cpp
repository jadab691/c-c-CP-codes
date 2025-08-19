#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

const int N = (int)1e8;
bool num[N];
int primes[6000000];
int total = 0;
map<int, int> factors;

void prime_factor(int n) {
    factors.clear();

    while (n % 2 == 0) {
        factors[2]++;
        n /= 2;
    }

    for (int p = 3; p * p <= n; p += 2) {
        while (n % p == 0) {
            factors[p]++;
            n /= p;
        }
    }

    if (n > 1)
        factors[n]++;
}

int main() {
    int n;
    while ((cin >> n) && n) {
        int original = n;
        prime_factor(abs(n));
        cout << original << " = ";

        bool first = true;

        if (original < 0) {
            cout << "-1";
            first = false;
        }

       for (auto it = factors.begin(); it != factors.end(); ++it) {
    int p = it->first;
    int cnt = it->second;
    for (int i = 0; i < cnt; ++i) {
        if (!first) cout << " x ";
        cout << p;
        first = false;
    }
}


        cout << endl;
    }

    return 0;
}
