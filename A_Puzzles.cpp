#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long
#define vec vector
#define veci vector<int>
#define input(vec) for (auto &x : vec) cin >> x;
#define print(vec) for (auto &x : vec) cout << x << " "; cout << endl;
#define vecl vector<long long>
#define pb push_back
#define ppb pop_back
#define sorta(x) sort(x.begin(), x.end());
#define sortr(x) sort(x.begin(), x.end(), greater<decltype(*x.begin())>())
#define rev(x) reverse(x.begin(), x.end())
#define pr pair
#define f first
#define s second
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)


int main() {
    
    int n , m ; cin >> n >> m ;
    veci v(m) ;
    input(v) ;
    sorta(v);
    int num = 10001 ;
    
    for(int i =0  ; i <= m-n ; i++){
        int diff = abs(v[n-1+i] - v[i]) ;
        num = min(num , diff) ;
    }
    cout << num << endl;
    
    return 0;
}

