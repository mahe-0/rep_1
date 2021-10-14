#include <stdio.h>
float ** SommeMatrice( float** A, float**B,int n, int m){
    CreerMatrice(n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            M[i][j]= A[i][j]+ B[i][j];
        }
        return M;
    }
}
    
