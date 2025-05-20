#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int main()
{
    int s , n ; cin >> s >> n ;
    vector<pair<int , int>>v(n) ;

    for(int i=0 ; i < n ; i++){
        cin >> v[i].f >> v[i].s ;
    }

    sort(v.begin() , v.end()) ;

    bool lol = 1 ;

    for(int i=0 ; i < n ; i++){
        if(s > v[i].f){
            s += v[i].s ;
        }else{
            lol = 0 ;
            break ;
        }
    }
    if(lol) yes ;
    else no ;
}

