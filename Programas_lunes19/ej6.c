#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i=0,temp=0,inte;
    printf("Ingrese un numero:_");
    do{
        scanf("%d",&numero);
        
        if(temp<numero){
            temp=numero;
            i++;
           
            printf("Es el mayor\n");
        }
        
        
    }while(numero>0);  
    printf("Mayor:%d\n",temp);
    printf("INTENTOS: %d",i);
        
    
}