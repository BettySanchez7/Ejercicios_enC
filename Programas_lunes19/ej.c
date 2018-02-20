#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i=0,suma=0;
    printf("Ingrese un numero:_");
    do{
        scanf("%d",&numero);
        suma=suma+numero;
        i=i+1;
        
    }while(numero>0);  
    printf("%f",(float)suma/(i-1));
}