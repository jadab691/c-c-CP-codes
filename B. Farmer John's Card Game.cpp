#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

int main(){
    int t ; cin >> t ;
    while(t--){
        int n , m ; cin >> n >> m ;
        vector<vector<int>>v(n , vector<int>(m)) ;

        //input
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }

        // sort in insider vector
        for(int i=0 ; i < n ; i++){
            sort(v[i].begin() , v[i].end()) ;
        }
        vector<pair<int , int>> mins ;


        for(int i =0  ; i < n ; i++){
            int mn = v[i][0] ;
            mins.push_back({mn , i+1}) ;      // min value 1st e , tarpor orijinal idx nisi 2nd e
        }
        sort(mins.begin() , mins.end()) ; //min val er hishab e sort korsi 

        bool lol = true ;

        for (int i = 0; i < n; i++) {

            int modval = v[i][0] % n ; // circularly 1st array er 1st val er mod newa hoitase .

            for (int j = 1; j < m; j++) {

                if(modval != (v[i][j] % n)){
                    lol = false ;  // jodi circular system e modval soman na hoy taile false ;
                }

            }
        }

        if(lol){
             for (auto &p : mins) {
             cout << p.second << " ";
           }
         cout << endl;
        } else{
            cout << -1 << endl;
        }

    }
    return 0 ;
}