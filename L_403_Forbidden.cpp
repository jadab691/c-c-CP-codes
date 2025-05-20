#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define ll long long

int main()
{
    int n, m, q, x, y, t;
    set<int> all;
    vector<set<int>> user;

    cin >> n >> m >> q;
    user.resize(n + 1);

    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> x >> y;
            user[x].insert(y);
        }
        else if (t == 2)
        {
            cin >> x; 
            all.insert(x);
        }
        else
        {
            cin >> x >> y;
            if (all.count(x) or user[x].count(y))
                yes;
            else
                no;
        }
    }
}
