#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long

bool isPrime(ll n) {
    if (n <= 1) 
        return false;         
    if (n <= 3) 
        return true;          

    if (n % 2 == 0 || n % 3 == 0)     
        return false;

    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    
    return true;
}

int main()
{
    ll a , b ; 
    while( cin >> a >> b    && a!=0 && b != 0 ){

        if (a > b) swap(a,b);
        vector < ll > v ;

        for(ll i = a ; i <= b ; i++){
            if(isPrime(i)){
                v.push_back(i) ;
            }
        }

    vector<int>diff ;
    for(int i= 1 ; i<v.size() ; i++){
        diff.push_back(v[i]-v[i-1]) ;
    }

    set<int>s ;

    for(int i=0 ; i<diff.size()-1 ; i++){
        if(diff[i] == diff[i+1]){
            s.insert(i) ;
            s.insert(i+1) ;
        }
    }

    diff.clear() ;


        diff.assign(s.begin(), s.end());


        for(int i=0 ; i+1 <diff.size(); i++){
            if(diff[i]+1 == diff[i+1]){
                cout<<v[diff[i]]<<" " ;
            }else{
                cout << v[diff[i]] << " " << v[diff[i]+1]<<" \n";
                
            }
        }

        if (!diff.empty())
    cout << v[diff.back()] << " " << v[diff.back() + 1] << "\n";

        
    }

    return 0 ;
}