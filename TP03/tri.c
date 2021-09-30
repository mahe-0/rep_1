#include <stdio.h>
int imin(int* T, int n){
    int indice_min =0 ;
    for(int i=1;i<n;i++){
        if(T[i]<T[indice_min]){
            indice_min=i ;
        }
    }
    return indice_min ;
}

void tri(int* T, int n){
   if(n<+1){
       return ;
   }
   int i=imin(T,n);
   int Tmp=T[i];
   T[i]=T[0];
   T[0]=Tmp;
   tri(T+1,n-1);
}
int
main(){
    int T[5]={4,2,3,1};
    tri(T,5);
    
    return 0; 
}
