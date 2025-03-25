#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int occurence (vector<int>a , int num , int occ){
    int count = 0 ;
    for(int i=0 ; i<a.size() ; i++){
        if(a[i] == num){
            count++ ;
            if(count == occ){
                return i ;
            }
        }
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n ; cin>>n ;
        int cnt0= 0 , cnt1=0 , cnt2=0 , cnt3=0 , cnt5=0 ;
        vector<int>v(n) ;
        for(int i=0 ; i<n; i++) {
            cin>>v[i] ;
            if(v[i] == 0) cnt0++ ;
            if(v[i] == 1) cnt1++ ;
            if(v[i] == 2) cnt2++ ;
            if(v[i] == 3) cnt3++ ;
            if(v[i] == 5) cnt5++ ;
        }

        if(cnt0 < 3 || cnt1 < 1 || cnt2 < 2 || cnt3 < 1 || cnt5 < 1){
            cout<<0<<endl;
        }else{
            int t0 , f1 , s2 , f3 , f5 ;

           t0 =  occurence(v , 0 , 3 ) ;
           f1 =  occurence(v , 1 , 1 ) ;
           s2 =  occurence(v , 2 , 2 ) ;
           f3 =  occurence(v , 3 , 1 ) ;
           f5 =  occurence(v , 5 , 1 ) ;

           int ans = max(t0,max(f1,max(s2,max(f3,f5)))) ;

           cout<<ans+1<<endl;
            
        }
    }
}
