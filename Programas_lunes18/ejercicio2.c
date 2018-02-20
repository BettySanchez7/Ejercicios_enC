#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias,horas,minutos,segundos,s,minm,h;
    puts("Ingrese el numero de segundos");
    scanf("%d",&segundos);

    s=(segundos%60);
    minm=(segundos/60);
    minutos=(minm)%60;
    horas=(minm/60);
    dias=horas/24;
    h=horas%24;

    printf("%d:%d:%d:%d\n",dias,h,minutos,s);

    
    
    


    
    
    return EXIT_SUCCESS;
}