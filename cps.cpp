#include<bits/stdc++.h>
using namespace std ;

int mem[100005];
int mark[100005];

int fib(int n ){
    if(n <= 1 ) return n;

    if(mark[n] == 1) return mem[n] ;

    int res =  fib(n-1) + fib(n-2) ;
    
    mem[n] = res ;
    mark[n] = 1 ;

    return res ;
}

int main (){



    return 0 ;
}
