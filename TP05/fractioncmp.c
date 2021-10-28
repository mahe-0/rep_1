#include "fraction.h"
int fractioncmp(struct fraction_s* f1,struct fraction_s* f2){
   return *numerateur(f1)* *denominateur(f2) - *denominateur(f1)* *numerateur(f2);
}

/*main a rajouter*/
int
main(){
    struct fraction_s* T=nouvelle_fraction(1,2);
    struct fraction_s*K=nouvelle_fraction(3,4);
    fractioncmp(T,K);
    return 0;
}
