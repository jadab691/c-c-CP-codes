#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        int total = 0;

        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
            total += vec[i];
        }

        if (total == n) {
            yes ;
            continue;
        }

        bool found = false;
        for (int i = 0; i < n - 1; ++i) {
            if (vec[i] == 0 && vec[i + 1] == 0) {
                yes ;
                found = true;
                break;
            }
        }

        if (!found) {
            no ;
        }
    }

    return 0;
}
