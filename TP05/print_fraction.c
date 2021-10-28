#include <stdio.h>
#include "fraction.h"
void print_fraction(struct fraction_s* f){
    printf("%d/%d", * numerateur(f),* denominateur(f));
}
int
main(){
    struct fraction_s* T= nouvelle_fraction(1,2);
    print_fraction(T);
    return 0;
}
