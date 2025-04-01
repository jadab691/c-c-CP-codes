#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t  ; cin>>t ;
    while(t--){
        int n ; cin>>n ;

        string a , b ;
        cin>>a>>b ;
        string str1 = "" ;
        string str2 = "" ;

        for(int i= 0 ; i<n; i++){
            if(i%2 == 1){
                str1.push_back(b[i]);
                str2.push_back(a[i]);
            }else{
                str1.push_back(a[i]);
                str2.push_back(b[i]);
            }
        }

        int zero1 =0 , zero2 = 0 ;
        for(int i=0 ; i<str1.size() ; i++){
            if(str1[i] == '0'){
                zero1++ ;
            }
            if(str2[i] == '0'){
                zero2++ ;
            }
        }

        if(zero1 >= ceil(str1.size()/2.0) && zero2 >= (str2.size()/2)){
            cout<<"YES"<<endl ;
        }else{
            cout<<"NO"<<endl ;
        }
        

    }
}