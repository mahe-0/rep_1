#include<stdio.h>
int
main(int argc,char*argv[]__attribute__((unused))){
    short x0=0;
    short x1=0;
    short x2=0;
    printf("%p\n",&x0);
    printf("%p\n",&x1);
    printf("%p\n",&x2);
    printf("%ld\n",&x0-&x1);
    printf("%ld\n",&x1-&x2);
    printf("%ld\n",&x0-&x2);
    *(&x0 -2)=x2 ;
    *(&x0 -1)=x1;
    printf("%d\n",argc);
    printf("%p\n",&x1);
    printf("%p\n",&x2);   
    return 0;
}
