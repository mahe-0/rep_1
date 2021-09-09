#include<stdio.h>
int
pgcd(  int  a  ,  int   b ) {
    if  (  a == b ) {
        return  a  ;
    } else  if  (  a > b ) {
        return  pgcd(  a-b  , b )  ;
    }  else  { /* cas  a < b*/
        return  pgcd(  a  , b-a  )  ;
    }
}
int main(){
    
    int  c = pgcd  (  12  ,  51  )  ;
    printf(" le pgcd est %d\n",c);
    return 0;
}
