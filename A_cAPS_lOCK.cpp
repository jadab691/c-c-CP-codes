#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long



int main (){
    string s ; cin >> s ;
    string ans = "" ;

    bool lol= true ;
    bool shob = true ; ;

    char ch = s[0] ;
    if(islower(ch)) lol = false ;
    if(islower(ch)) shob = false ;
    

    for(int i=1 ; i < s.size() ; i++){
        if(islower(s[i])){
            lol = true  ;
            shob = false ;
        }
    }



    
        if(!lol){
            for(int i=0 ; i < s.size() ; i++){
                if(isupper(s[i])){
                    ans.push_back(tolower(s[i])) ;
                }else{
                    ans.push_back(toupper(s[i])) ;
                }   
            }

        }

        if(shob){
            for(int i=0 ; i < s.size() ; i++){
                if(isupper(s[i])){
                    ans.push_back(tolower(s[i])) ;
                }else{
                    ans.push_back(toupper(s[i])) ;
                }   
            }
            cout << ans << endl;
            return 0 ;
        }


    if(lol) cout << s << endl;
    else cout << ans << endl;

    return 0 ;
}