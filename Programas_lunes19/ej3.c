#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,den,x;
    float res, sum;
    printf("Ingrese n:_");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        den= (11*i);

        if(i==1){
            printf("%d", i);
        }
        if(i>1){
        if((i%2)==0){
                printf("%d/%d",-1,den);
                res= pow(-den,-1);
                
               
                
            }else{
                printf("+%d/%d",1,den);
                res= pow(den,-1);
                 
               
            }
            }

             sum=sum+res;

        }

        printf("\nResultado= %f",1+sum);


        
    }

    
        
