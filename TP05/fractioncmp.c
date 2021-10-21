#include "fraction.h"
int fractioncmp(struct fraction_s* f1,struct fraction_s* f2){
    if (f1>f2){ 
        return 1;
    }else{
        return -1;
    }
}
#ifdef TESTS
int 
main(){
    fractioncmp(nouvelle_fraction(3,4),nouvelle_fraction(-3,4));
    return 0;
}
#endif 
