#include <stdio.h>
float** CreeMatrice(int n,int m){
    float**M;
    M= malloc(n*sizeof(float*));
    for(int i=0;i<n;i++){
        *M= malloc(n*sizeof(float));
        for(i=0;i<m;i++);
        M= malloc(m*sizeof(float));
        }
        return M;
}
        
#ifdef TESTS
#include <stdio.h>
int
main(){
    int n = 3;
    int m = 2;
    CreerMatrice(n,m);
}
#endif
