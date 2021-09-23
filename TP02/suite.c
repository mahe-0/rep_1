#include<stdio.h>

int suite1(int n){
    if( n == 0){
        return 1;
    }else{
        return 3*suite1(n-1)-1;
    }
}
int res = suite1(10);
int  suite2( int n){
    int u_courant,u_precedent;
    u_courant =1; 
    for(int i=0;i<n;i++){
        u_precedent=u_courant;
        u_courant=u_prcedent -1;
    }
    return u_courant;
}
int res2=suite2(10);
