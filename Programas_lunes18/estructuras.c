#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    /*
    for(int i=1;i<11;i++)
        printf("%d\n",i);

    int i=0;

    while(i<10){
        printf("%d\n",++i);
    }

    i=0;
    do{
        printf("%d\n",++i);
    }while(i<10);*/

    for(int hora=0; hora<24;hora++)
        for(int minuto=0;minuto<60;minuto++)
            for(int segundos=0; segundos<60;segundos++)
                printf("%d:%d:%d\n",hora,minuto,segundos);
                sleep(1);

    return EXIT_SUCCESS;
}