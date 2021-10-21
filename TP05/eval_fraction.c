#include "fraction.h"
double eval_fraction(struct fraction_s* f){
    double A= *numerateur(f) ;
    double B= *denominateur(f);
    return A/B;
}
