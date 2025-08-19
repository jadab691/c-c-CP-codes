#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define int long long


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int  t ; cin >> t ;
    
    while(t--){
        int n ; cin >> n ;

    
        vector < pair<int,int> > a(n) , b(n) ;


        for(int i=0 ; i < n ; i++){
            cin >> a[i].f >> a[i].s ;
        }
        for(int i=0 ; i < n ; i++){
            cin >> b[i].f >> b[i].s ;
        }


        sort(a.begin() , a.end()) ;
        sort(b.begin() , b.end()) ;

        int cnt = 0 ;
        int j = 0 ;

        for(int i=0 ; i  < n  ; i++){
            while ((j < n ) && (b[j].f <= a[i].f && b[j].s <= a[i].s)){
                cnt++ ;
                j++ ;
                break ;
            }
        }
        cout << cnt << endl ;
    }

    return 0 ;
}