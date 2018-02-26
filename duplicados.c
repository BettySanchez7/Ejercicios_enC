#include <stdio.h>
 
 
int main()
{
        int i,j,k;
        int elementos;
        printf("Dime la cantidad de elemento:");
        scanf("%d",&elementos);
        int arreglo[elementos];

        for(int i=0;i<elementos;i++)
        {
            scanf("%d",&arreglo[i]);
        }
        for(int i=0;i<elementos;i++)
        {
               printf("%d ",arreglo[i]);
        }

       
        for(i = 0; i < elementos; i++)
        {
        for(j = i+1; j < elementos; j++)
        {
        if(arreglo[i] == arreglo[j])
        {
                k = j;
                while(k < elementos)
                {
                 arreglo[k] = arreglo[k+1];
                 ++k;
                }
                --elementos;
                --j;            
        }
                }
        }
        puts("-----------------------");
        for(i = 0; i < elementos; i++)
        {
                printf("\n%d ",arreglo[i]);
        }
        //printf("%d\n", j);
        return 0;
}