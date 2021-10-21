#include <stdlib.h>
#include "fraction.h"
    
struct fraction_s* nouvelle_fraction(int a,int b){
    struct fraction_s*f;
    f= malloc(sizeof(struct fraction_s));
    f->p = a;/* ou (*t).p   */
    f->q = b;/* ou (*t).q   */
    if(b<0){
        a=-a;
        b=-b;
    }
    if( b==0){
        if(a >0){
            a=1;
        }else{
            a=-1;
        }
    }
    if(a==0){
        b=1;
    }
            
    return f;

    
}
#ifdef TESTS
#include "tests.h"
int
main(){
    struct fraction_s*f;
    f=nouvelle_fraction(1,2);
    VAL_INT(f->p);
    TEST_RES(f->p==2);
    VAL_INT(f->q);
    TEST_RES(f->q==3);
    f=nouvelle_fraction(2,-3);
    TEST_RES(f->p==-2);
    TEST_RES(f->q==3);
    f=nouvelle_fraction(2,0);
    TEST_RES(f->p==1);
    TEST_RES(f->q==0);
    f=nouvelle_fraction(-3,0);
    TEST_RES(f->p==1);
    TEST_RES(f->q==0);
    f=nouvelle_fraction(0,-4);
    TEST_RES(f->p==0);
    TEST_RES(f->q==1);
    return 0 ;
}

#endif
