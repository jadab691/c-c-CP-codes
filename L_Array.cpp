#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

bool even(int x){
    return (x%2 == 0) ;
}
bool positive(int y){
    return (y > 0   && y != 0) ;
}
int main()
{
    int  n ; cin>>n ;
    
    vector<int>v(n) ;

    int pos=0 , neg = 0 ;
    for(int &c:v) {
        cin>>c ;
        if(!positive(c)) neg++ ;
    }
if(!even(neg)){
    
    sort(v.begin() , v.end()) ;

    cout<<1<<" "<<v[0]<<endl;

    v.erase(v.begin() + 0);

    vector<int>less ;   

    for(int i=0 ; i<n-1 ; i++){
        if(v[i] != 0) {
            less.push_back(v[i]) ;
        }
    }

    cout<<less.size()<<" " ;

    for(int g:less){
        cout<<g<<" " ;
    }

    cout<<endl;
    cout<<1<<" "<<0<<endl;
}else{
    
    sort(v.begin() , v.end()) ;

    cout<<1<<" "<<v[0]<<endl;

    v.erase(v.begin() + 0);
    v.erase(v.begin() + 1);


    vector<int>less ;   

    for(int i=0 ; i<n-1 ; i++){
        if(v[i] != 0) {
            less.push_back(v[i]) ;
        }
    }

    cout<<less.size()<<" " ;

    for(int g:less){
        cout<<g<<" " ;
    }

    cout<<endl;

    cout<<1<<" "<<0<<endl;
  }
}