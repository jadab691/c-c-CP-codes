#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


int main (){
    int t ; cin>>t ;
    while(t--){
        ll n;cin>>n;
    vector<ll>v ;
    ll num ;

    for (int i=0;i<n;++i){
        cin>>num ;
        v.push_back(num) ;
    }

    vector<ll> arr(n,0);

    ll maxele=0 ;

    for (int i=0;i<n;++i) {
        maxele=max(maxele,v[i]);
        arr[i]=maxele;
    }

    reverse(v.begin(),v.end()) ;
    reverse(arr.begin(),arr.end()) ;

    for (int i=1;i<n;++i) {
        v[i]+=v[i-1] ;
    }

    cout << arr[0]<<" ";
    for(int i=0;i<n-1;++i) {

        cout <<v[i]+arr[i+1]<<" " ;


    }
        
    }
    return 0 ;
}
