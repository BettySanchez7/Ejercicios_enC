#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1,int2;
    float valor;
    puts("Ingrese la fraccion");
    scanf("%d%*[/]%d",&int1,&int2);
    valor=int1/(float)(int2);
    printf("%f",valor);

 
    
    return EXIT_SUCCESS;
}