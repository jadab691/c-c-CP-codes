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
#define f first
#define s second
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)


int main() 
{
   ll n , l ; cin >> n >> l;
   vecl v(n) ; 
   input(v) ;
   sorta(v) ;
   double max_gap = max((double)(v[0]) , (double)(l - v[n-1]));

   for (int i = 0; i < n - 1; i++) {
       double gap = (v[i + 1] - v[i]) / 2.0;
       max_gap = max(max_gap, gap);
   }

   printf("%.10lf" , max_gap) ;
   cout << endl;
   
    return 0;
}
