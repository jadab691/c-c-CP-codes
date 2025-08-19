#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long




const int  N = (int)1e8 ;
bool num[N] ;
int primes[6000000] ;
int total = 0 ;




void sieve_2(){ // more fast
    memset(num , true , sizeof num) ;

    for(int i = 4 ; i < N ; i++){
        num[i] = false ;
    }

    num[0] = num[1] = false ;

    for(int i=3 ; i < N ; i+=2){
        if(num[i]){
            for(int j = i+i ; j< N ; j+=i){
                num[j] = false ;
            }
        }
    }
}

void sieve_1(){
    memset(num , true , sizeof num) ;
    num[0] = num[1] = false ;
    for(int i=2 ; i < N ; i++){
        if(num[i]){
            for(int j = i+i ; j< N ; j+=i){
                num[j] = false ;
            }
        }
    }
}



void store(){
    
    for(int i=2 ; i < N ; i++){
        if(num[i]){
            primes[total++] ;
        }
    }
}


int main()
{
    sieve_1() ;
    store() ;

    cout << "There are " << total << " primes between 1 and " << N << endl;

}