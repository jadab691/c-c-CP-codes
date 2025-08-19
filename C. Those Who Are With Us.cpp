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


void solve() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));

    int mexi = -1;
    vector<pair<int, int>> rc;

    
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> v[i][j];
            if (v[i][j] > mexi) {
                mexi = v[i][j];
                rc.clear();
                rc.pb({i, j});
            } else if (v[i][j] == mexi) {
                rc.pb({i, j});
            }
        }
    }

    set<int> row , col ;

    for(int i=0 ; i < rc.size() ; i++){
        row.insert(rc[i].f) ;
        col.insert(rc[i].s) ;
    }

    for(auto i : row){
        for(auto j : col){
            bool ok = true ;
            for (int k = 0; k < rc.size(); ++k) {
                int x = rc[k].f, y = rc[k].s;
                if (x != i && y != j) {
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << mexi - 1 << endl;
                return ;
            }
        }
    }

    cout << mexi << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
