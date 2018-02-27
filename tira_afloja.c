#include <stdio.h>
#include <stdlib.h>
int main(){
    int casos, personas;
    printf("Ingresa el numero de casos a probar\n");
    scanf("%d", &casos);
    printf("Ingresa el numero de personas\n");
    scanf("%d", &personas);
    int pesos[personas];
for( int k=0; k<casos; k++){
   for(int i =0; i< personas; i++){
        if(i<personas/2){
        printf("Ingresa tu peso\n");
         fflush(stdin);
        scanf("%d", &peso1);
        fflush(stdin);
        cum1=cum1+peso1;
        }else{
        printf("Ingresa tu peso 2\n\n");
        fflush(stdin);
        scanf("%d", &peso2);
        fflush(stdin);
        cum2=cum2+peso2;
        }       
   }
   if(cum2<cum1){
       printf("%d\n%d\n", cum2, cum1);
   }else printf("%d\n%d\n", cum1, cum2);

}
}


/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int casos, personas, peso1, peso2, cum1=0, cum2=0;
    printf("Ingresa el numero de casos a probar\n");
    scanf("%d", &casos);
    printf("Ingresa el numero de personas\n");
    scanf("%d", &personas);
for( int k=0; k<casos; k++){
   for(int i =0; i< personas; i++){
        if(i<personas/2){
        printf("Ingresa tu peso\n");
         fflush(stdin);
        scanf("%d", &peso1);
        fflush(stdin);
        cum1=cum1+peso1;
        }else{
        printf("Ingresa tu peso 2\n\n");
        fflush(stdin);
        scanf("%d", &peso2);
        fflush(stdin);
        cum2=cum2+peso2;
        }       
   }
   if(cum2<cum1){
       printf("%d\n%d\n", cum2, cum1);
   }else printf("%d\n%d\n", cum1, cum2);

}
}
*/