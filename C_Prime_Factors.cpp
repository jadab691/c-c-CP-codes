#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long


bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n == 2) return true; 
    if (n % 2 == 0) return false;  

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;  
        }
    }
    return true;  
}




int main()
{
    ll a , b ; 
    while ( cin >> a >> b){
        vector <ll> v ;
        for(ll i=a ; i <= b ; i++){
            if(isPrime(i)){
                v.push_back(i) ;
            }
        }

        if (v.size() < 2) {
            cout << "There are no adjacent primes." << endl;
            continue;
        }

        ll mina = v[0], minb = v[1], maxa = v[0], maxb = v[1] , maxdis , mindis = abs(v[1] - v[0]);
        maxdis = mindis;

        for(ll i=0 ; i < v.size()-1 ; i++){
            ll currdis = abs(v[i] - v[i+1]) ;

            if(mindis > currdis){
                mindis = currdis ;
                mina = v[i];
                minb = v[i+1] ;
            }if(maxdis < currdis){
                maxdis = currdis ;
                maxa = v[i];
                maxb = v[i+1] ;
            }
            
        }


        cout << mina <<"," << minb <<" are closest, " ;
        cout << maxa << ","<< maxb <<" are most distant." << endl;


    }

    return 0 ;
}