#include<stdio.h>
#define TAILLE 10000
int
somme(int *T,int N){
    int res=0;
    for(int i=0;i<N;i++){
        res+=T[i];
    }
    return res;
}

int 
main(){
    int A;
    int B;
    scanf("%d",&A);
    scanf("%d",&B);
    int T1[TAILLE];
    int s;
    for(int i = A;i<B;i++){
        T1[i]=i;
    }
    s=somme(T1,B+1);
    printf("la somme des nombres jusqu'a %d a %d est %d\n",A,B,s);
    return 0;
} 
