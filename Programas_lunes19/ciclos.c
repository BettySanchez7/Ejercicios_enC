#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    for(int i=0; i<10;i++){
        if(i==5)
            break; //continue    break rompe el ciclo, continue salta la instrucci{on}
        printf("%d\n",i);
        }
    */

    int n,suma=0;

    do{
        printf("Ingresa un entero;");
        scanf("%d", &n);

        if (n==0){
            printf("El cero no tiene negativo");
            goto salir;
        }

        printf("\nEl opuesto es: %d\n",-n);
        suma+=n;

    }while(n>=-10 && n<=10);


    salir:
    printf("Suma: %d",suma);




}