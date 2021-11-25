char*ligne;
char c;
scanf("%m[^\n]%c",&ligne,&c);
for(i=0,i<sizeof(ligne),i++){
    ligne[i]= ligne[i] + 13;
}
free(ligne)
