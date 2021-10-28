#include <stdio.h>
#include <stdlib.h>
#include "fraction.h"
/* A recherche 0.3 -p 0.01
 * cherche une fraction egale a 0,3 a 0,01 pres 
 * B recherche 0.3 
 * cherche une fraction egale a 0,3 a 0,00001 pres
 *  recherche 
 * x? 0,3 demandé
 * precision? 0,001 demandé
 * 3cas:
 * A 4arguments argv[0...3]
 * B 3arguments arg[0], argv[1]
 * C 1argument argv[O]
 * (4,3 et 1 = valeur de argc)
 */

int
main ( int argc , char * argv[] ){
    double x , eps ;
    struct fraction_s * res ;
    if(argc==4){
        argv[0]="recherche";
        argv[1]="-p";
        eps=atof(argv[2]);
        x=atof(argv[4]);
    }
    if(argc==2){
       argv[0]="recherche";
        x=atof(argv[1])ˇ;
        eps=0.00001;
        
    }
    if(argc==1){
    x= scanf("%d",&x);
    eps= scanf("%d",&eps);
    
    }
    else{
        return 1;
    }
    res = ftofraction ( x , eps ) ;
    print_fraction ( res ) ;
    return 0 ;
}
         
