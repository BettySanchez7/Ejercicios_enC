#include <stdio.h>
#include <stdlib.h>
int main(){
    int casos, personas, peso1, peso2, cont=0, cont2=0;
    printf("Ingresa el numero de casos a probar\n");
    scanf("%d", &casos);
    printf("Ingresa el numero de personas\n");
    scanf("%d", &personas);
for( int k=0; k<casos; k++){
   for(int i =0; i< personas; i++){
        if(i>personas/2){
        printf("Ingresa tu peso\n");
         fflush(stdin);
        scanf("%d", &peso1);
        fflush(stdin);
        cont=cont+peso1;
        }else{
        printf("Ingresa tu peso \n\n");
        fflush(stdin);
        scanf("%d", &peso2);
        fflush(stdin);
        cont2=cont2+peso2;
        }       
   }
   if(cont2<cont){
      puts("-------------------------------");
       printf("\n%d\n%d\n", cont2, cont);
   }else {
   puts("-------------------------------");
   printf("%d\n%d\n", cont, cont2);
}
}


}
