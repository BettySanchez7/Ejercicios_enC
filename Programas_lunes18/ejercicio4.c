#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>


int main(){
    int numero, digito;
    printf("Ingresa un número");
    scanf("%d%n",&numero);


while(numero!=0){
    digito=numero%10;
    numero=numero/10;
    printf("%d",digito);
}

  

    return EXIT_SUCCESS;
}