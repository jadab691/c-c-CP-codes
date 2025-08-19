/* _AUTHOR_ : MAHEDI HASAN ANIK
_CREATED_ : 2025-05-04 || 02:45:39 */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define vec vector<ll>
#define sorta(x) sort(x.begin(), x.end());
#define sortd(x) sort(x.begin(), x.end(), greater<int>());
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define output(x)           \
    for (ll val : x)        \
        cout << val << " "; \
    cout << '\n';
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)
#define pb push_back
#define pbb pop_back
#define nl '\n'
#define ff first
#define ss second
#define debug(a) cout << #a << "-->" << (a) << endl;
#define I_AM_SPEED                \
    ios ::sync_with_stdio(false); \
    cin.tie(NULL);
const int N = 1100;
map<string, int> mp;
vector<int> v[N];
vector<int> transpose_of_v[N];
bool vis[N];
stack<int> stacky;
void dfs(int val)
{
    vis[val] = true;
    for (auto vall : v[val])
    {
        if (!vis[vall])
        {
            dfs(vall);
        }
    }
    stacky.push(val);
}
void fake_dfs(int val)
{
    vis[val] = true;
    for (auto vall : transpose_of_v[val])
    {
        if (!vis[vall])
        {
            fake_dfs(vall);
        }
    }
}
void solve()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        cin.ignore();
        for (int i = 0; i <= a; i++)
        {
            vis[i] = false;
        }
        for (int i = 1; i <= a; i++)
        {
            string s;
            getline(cin, s);
            mp[s] = i;
        }
        for (int i = 1; i <= b; i++)
        {
            string s1, s2;
            getline(cin, s1);
            getline(cin, s2);
            int u = mp[s1];
            int vv = mp[s2];
            v[u].pb(vv);
            transpose_of_v[vv].pb(u);
        }
        for (int i = 0; i <= a; i++)
        {
            vis[i] = false;
        }
        for (int i = 1; i <= a; i++)
        {
            if (!vis[i])
            {
                dfs(i);
            }
        }
        for (int i = 0; i <= a; i++)
        {
            vis[i] = false;
        }
        int scc = 0;
        while (!stacky.empty())
        {
            int tp = stacky.top();
            stacky.pop();
            if (!vis[tp])
            {
                scc++;
                fake_dfs(tp);
            }
        }
        for (int i = 0; i <= a; i++)
        {
            v[i].clear();
            transpose_of_v[i].clear();
        }
        mp.clear();
        while (!stacky.empty())
        {
            stacky.pop();
        }
        cout << scc << endl;
    }
}
int main()
{
    I_AM_SPEED;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}