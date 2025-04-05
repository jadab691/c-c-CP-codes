#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll N, K;
        cin >> N >> K;
        string S;
        cin >> S;

        ll N1 = 0 , N0 = 0 ;

        for(ll i=0  ; i<N ; i++){
            if(S[i] == '1') N1++ ;
            // else if(S[i] == '0') N0++ ;
        }
        ll fi = 0 ;

        for(int i= N-1 ; i>=0 ; i--){
            if(S[i] == '1'){
                fi = i+1 ;
                break;
            }
        }

       

       for(ll i=0  ; i<fi ; i++){
        if(S[i] == '0') N0++ ;
       }

       int ans = N1 + min(N0, K) ;

        cout<<ans<<endl;
    }
}
