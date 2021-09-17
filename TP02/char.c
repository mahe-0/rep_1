#include<stdio.h>

int minus(){
    char a ;
    scanf("%c",&a);
    if((96<a)&&(a<123)){
        return 1;
    } else{
        return 0;
    }
    
}
int
main () {
    if (minus()){
        printf("minsucule\n");
    }else{
        printf( "pas minuscule\n");
    }
    return 0;
}

