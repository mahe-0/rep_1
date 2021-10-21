#include "fraction.h"
int fractioncmp(struct fraction_s* f1,struct fraction_s* f2){
   return *numerateur(f1)* *denominateur(f2) - *denominateur(f1)* *numerateur(f2);
}

