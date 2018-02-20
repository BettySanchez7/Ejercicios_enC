#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias,horas,minutos,segundos,s;
    puts("Ingrese el n°días n°horas n°minutos n°segundos(separados por espacios");
    scanf("%d%*[ ]%d%*[ ]%d%*[ ]%d", &dias, &horas, &minutos, &segundos);
    s=(horas*3600)+(dias*86400)+(minutos*60)+segundos;
    printf("%d",s);
    return EXIT_SUCCESS;
}