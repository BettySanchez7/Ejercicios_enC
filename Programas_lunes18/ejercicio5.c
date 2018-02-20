#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>


int main(){
    int numero, digito,suma=0;
    printf("Ingresa un número");
    scanf("%d%n",&numero);


while(numero!=0){
    digito=numero%10;
    numero=numero/10;
    suma=suma+digito;
}
printf("La suma de los digitos es:%d\n",suma );

  

    return EXIT_SUCCESS;
}