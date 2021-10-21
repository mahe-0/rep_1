#include <stdio.h>
#include "fraction.h"
void print_fraction(struct fraction_s* f){
    printf("%d/%d", * numerateur(f),* denominateur(f));
}
    
