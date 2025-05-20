#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int main()
{
    ll t;
    cin >> t;
    ll tc = 1;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n), sumval, repval;

        bool all_min = true;

        for (auto &x : a) cin >> x;
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] != -1) {
                sumval.push_back(a[i] + b[i]);
                all_min = false;
            }
        }

        ll max_of_sumval = 0;

        if (!sumval.empty()) {
            max_of_sumval = *max_element(sumval.begin(), sumval.end());
        } else {
            max_of_sumval = *max_element(a.begin(), a.end());
        }

       

        bool lol = false;

        for (ll i = 0; i < n; i++) {
            if (b[i] == -1) {
                ll val = max_of_sumval - a[i];
                if (val < 0) lol = true;


                repval.push_back(val);
            }
        }

        ll max_repval = 0;
        if (!repval.empty()) {
            max_repval = *max_element(repval.begin(), repval.end());
        }

        if (k < max_repval)
              lol = true;

        if (!sumval.empty()) {
            for (ll i = 0; i < sumval.size() - 1; i++) {
                if (sumval[i] != sumval[i + 1])
                    lol = true;
            }
        }


        if (lol) {
            cout << 0 << endl;
            continue;
        }

        if (all_min) {
            cout << k + 1 - max_repval << endl;
            continue;
        }

        if (max_of_sumval >= max_repval) {
            cout << 1 << endl;
            continue;
        }

    }
}
