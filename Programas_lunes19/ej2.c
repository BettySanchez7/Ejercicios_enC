#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,temp;
    printf("Ingrese n:_");
    scanf("%d",&n);


    for(i=0;i<n+1;i++){
         printf("%d\t",i);
        for(j=1;j<=n;j++){
            if(i==0){
                printf("%d\t",j);
            }
            else{
            temp=i*j;
            
            printf("%d\t",temp);}
        }
        printf("\n");
        
    }
    
        
}