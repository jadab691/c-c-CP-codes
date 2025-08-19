#include <bits/stdc++.h>
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


void solve(){ 
    cout << "enter the array size and the array element : " << endl;
    int n; 
    cin >> n;

    vector <int> v(n) ;
    input(v) ;

    vector<int> dp_lis(n , 1) ;

    

    for(int i=1 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            if(v[i] > v[j]){
                dp_lis[i] = max(dp_lis[i] , dp_lis[j]+1) ;
            }
        }
    }

    int lis_length = *max_element(dp_lis.begin() , dp_lis.end()) ;


    cout << "The lis length of the given array is : " << lis_length << endl;

   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1 ;
    // cin >> t ;
   
    while(t--){
      solve() ;
    }
    return 0;
}
