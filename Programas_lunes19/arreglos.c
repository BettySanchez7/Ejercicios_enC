#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main(){
    
/*
    for(int i=0;i<SIZE;i++){
        printf("%d\n",arreglo[i]);
    }
*/

    int elementos;
    printf("Dime la cantidad de elemento:");
    scanf("%d",&elementos);
    int arreglo2[elementos];
    int arreglo[elementos];


    srand(time(NULL));
    for(int i=0;i<elementos;i++)
    {
        arreglo1[i]=rand()%11;
    }

    srand(time(NULL));
    for(int i=0;i<elementos;i++)
    {
        arreglo1[i]=rand()%11;
    }


    for(int i=0;i<elementos;i++)
    {
        printf("%d\n",arreglo2[i]);
    }

    for(int i=0;i<elementos;i++)
    {
        printf("%d\n",arreglo2[i]);
    }

}