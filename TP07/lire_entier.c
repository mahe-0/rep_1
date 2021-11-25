void lire_entier(int*n){
    int res_scanf;
    non_blancs;
    do{
    printf("donnez un entier:");
    scanf("%d",n);
    non_blancs=lire_fin_ligne();
}while((res_scanf==0||(non_blancs>0))
}
#ifdef TESTS
#include "tests.h"
int
main(){
    lire_entier(&n);
    test(n==5);
    return0;
}
#endif
