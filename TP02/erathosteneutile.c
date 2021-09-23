#include<stdio.h>
int main(){
#define TAILLE 100000
    void crible2(int *t, int N){
        t[0]=0;
        t[1]=0;
        for(int i=2;i<N;i++){
            t[i]=i;
        }
        for(int i=2;i<N;i++){
            if(t[i]==i){
                for(int j=2;i*i<N;j++){
                    t[i*j]=i;
                }
            }
        }
    }
    return 0;
}
    
