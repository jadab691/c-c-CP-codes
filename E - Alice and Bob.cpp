#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define ll long long


int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >>  n ;
        vector<pair<int , int >> a(n) , b(n) ;

        for(int i=0 ;  i < n ; i++){
            cin >> a[i].f >> a[i].s ;
        }
        for(int i=0 ;  i < n ; i++){
            cin >> b[i].f >> b[i].s ;
        }

        sort(a.rbegin() , a.rend()) ;
        sort(b.rbegin() , b.rend()) ;


        int match = 0 ;
        multi_set<int > s ;
        int i = 0 ;
        for(int j=0 ; j<n ; j++){
            
        }










        // cout <<" ans is " << endl;
        // for(int i=0 ;  i < n ; i++){
        //     cout << a[i].f << " " << a[i].s << endl;
        // }
        // cout<<endl;
        // for(int i=0 ;  i < n ; i++){
        //     cout << b[i].f << " " << b[i].s << endl;
        // }
        // cout <<"''''''''''''''''''''''''''''''''''''"<<endl;






    }
}