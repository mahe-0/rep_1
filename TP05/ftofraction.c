#include <maths.h>
#include "fraction.h"
struct fraction_s*
fraction(double x, double eps){
    struct fraction_s
    *haut= nouvelle_fraction(1,1),
    *bas= nouvelle_fraction(0,1),
    *milieu;
    double val_milieu;
    while(1){
        milieu= addition_cancre(bas,haut);
        val_milieu= eval_fraction(milieu);
        if( fabsl(val_milieu-x)<eps){
            break;
            if(val_milieu<x){
                bas=milieu;
            }else{
                haut=milieu;
            }
        }//fin while
        return milieu;
    }
int
main(){
    fraction(3.14,0.971);
    return 0;
}
