#include<bits/stdc++.h>
using namespace std ;
#include<list>
#define f first
#define s second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long


ll bam(vector<ll>& v , ll a ){

    ll left = 0 , right  = v.size() ;

    while(left < right ){

        ll mid = left + (right - left)/2 ;

        if( a <= v[mid]){
            right = mid ;
        }else{
            left = mid+1 ;
        }
    }

    return left ;
}

ll dan(vector<ll>& v , ll b){

    ll left = 0 , right = v.size() ;

    while(left < right ){

        ll mid = left + (right - left)/2 ;

        if(b  >= v[mid]){
            left = mid+1 ;
        }else{
            right = mid ;
        }
    }
    return right ;
}



int main()
{
    int t; 
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ":" << endl;
        
        ll n, q;
        cin >> n >> q;
        
        vector<ll> v(n);
        for (ll &k : v) cin >> k;

        for (ll g = 1; g <= q; g++) {
            ll a, b;
            cin >> a >> b;

            ll strtIdx = bam(v ,a) ;
            ll endIdx = dan(v,b) ;

            cout<<endIdx-strtIdx<<endl;

        }
    }
    
}