#include<stdio.h>
struct fraction_s{
    int p;
    int q;
};
struct fraction_s* nouvelle_fraction(int , int);
int fractioncmp(struct fraction_s*,struct fraction_s*);
int * denominateur( struct fraction_s *);
int * numerateur(struct fraction_s *);
