
int imin(float *T, int n){
    int indice_min =0 ;
    for(int i=1;i<n;i++){
        if(T[i]<T[indice_min]){
            indice_min=i ;
        }
    }
    return indice_min ;
}


float T[5]= {3,1,2,5,0} ;
int i = imin(T,5)
