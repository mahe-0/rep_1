#include "fraction.h"
 struct fraction_s* addition_cancre(struct fraction_s* f1, struct fraction_s* f2){
    int T;
    int K;
    T=*numerateur(f1)+ *numerateur(f2);
    K=*denominateur(f1)+ *denominateur(f2);
    return nouvelle_fraction(T,K);
}
