int 
lire_fin_ligne(){
   int nb=0;
   int c;
   while(1){
       c=getchar();
    if(c==EOF)
        {break;
            
        }
    if(!isspace(c)){
        nb=nb+1;
        
    }
    
