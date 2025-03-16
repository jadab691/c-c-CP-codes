#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int main(){
    int t ; cin>>t ;
    while(t--){
        int n ; cin>>n ;

        string s ; cin>>s ;
    // cout<<s<<endl;
        int ans = -1 ;

        for(int i=0 ; i<n-1 ; i++){
            if(s[i]=='R' && s[i+1] == 'L') {
                ans = 0 ;  
                break ;
            }
            else if(s[i]=='L' && s[i+1] == 'R') {
                ans = i+1 ;
                break ;
            }
        }

        cout<<ans<<endl;

    }
}