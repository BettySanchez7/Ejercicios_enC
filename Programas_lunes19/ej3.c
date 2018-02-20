#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,den,x,res,res2,sum;
    printf("Ingrese n:_");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        den= 11*(i);
        if(i==1){
            printf("%d",i);
        }
        else if(i%2==0){
                printf("%d/%d",-1,den);
                res=(1/(11*i))*(-1);
                sum=res+1;
                
            }else{
                printf("+%d/%d",1,den);
                res2=1/4;
                sum=res2+1;
               
            }

        }

        printf("%d",sum);


        
    }

    
        
