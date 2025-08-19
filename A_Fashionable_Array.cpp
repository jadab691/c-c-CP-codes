#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl 
#define ll long long
#define input(vec) for (auto &x : vec) cin >> x ;
#define print(vec) for (auto &x : vec) cout << x << " "; cout << endl;
#define pb push_back
#define ppb pop_back
#define sorta(x) sort(x.begin(), x.end());
#define sortr(x) sort(x.begin(), x.end(), greater<decltype(*x.begin())>())
#define rev(x) reverse(x.begin(), x.end())
#define f first
#define s second
#define even(x) ((x) % 2 == 0)
#define odd(x) ((x) % 2 != 0)

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        veci v(n);
        input(v);
        sorta(v);

        if (even(v[0] + v[n - 1])) {
            cout << 0 << endl;
            continue;
        }

        int left = 0;
        while (odd(v[left] + v[n - 1])) {
            left++;
        }

        
        int right = 0;
        while (odd(v[0] + v[n - 1 - right])) {
            right++;
        }


        int res = min( left , right);
        
        cout << res << endl;

    }
    return 0;
}
