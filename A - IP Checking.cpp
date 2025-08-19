#include <bits/stdc++.h>
#include <numeric>  
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl 
#define endl '\n'
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

string decimalToBinary(const string& decimalStr) {
    int num = stoi(decimalStr);  
    string binary = "";
    for (int i = 7; i >= 0; --i) {
        binary += ((num >> i) & 1) ? '1' : '0';
    }
    return binary; 
}

void solve(int anscnt) {
    string dec; cin >> dec;
    string bin; cin >> bin;

    string d1 = "", d2 = "", d3 = "", d4 = "";
    string b1 = "", b2 = "", b3 = "", b4 = "";

    int cnt = 0;
    for (int i = 0; i < dec.size(); i++) {
        if (cnt == 0 && dec[i] != '.') d1 += dec[i];
        else if (cnt == 1 && dec[i] != '.') d2 += dec[i];
        else if (cnt == 2 && dec[i] != '.') d3 += dec[i];
        else if (cnt == 3 && dec[i] != '.') d4 += dec[i];
        if (dec[i] == '.') cnt++;
    }

    int cnt2 = 0;
    for (int i = 0; i < bin.size(); i++) {
        if (cnt2 == 0 && bin[i] != '.') b1 += bin[i];
        else if (cnt2 == 1 && bin[i] != '.') b2 += bin[i];
        else if (cnt2 == 2 && bin[i] != '.') b3 += bin[i];
        else if (cnt2 == 3 && bin[i] != '.') b4 += bin[i];
        if (bin[i] == '.') cnt2++;
    }

    bool ok = true;
    if (decimalToBinary(d1) != b1) ok = false;
    if (decimalToBinary(d2) != b2) ok = false;
    if (decimalToBinary(d3) != b3) ok = false;
    if (decimalToBinary(d4) != b4) ok = false;

    if (ok) {
        cout << "Case " << anscnt << ": Yes" << endl;
    } else {
        cout << "Case " << anscnt << ": No" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}
