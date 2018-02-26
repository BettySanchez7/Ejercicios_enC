#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{int m,n,f,c,i,j,k;

printf("\n---------------------------------------------------\n");
printf("\nINGRESE LA FILA Y COLUMNA DE LA PRIMERA MATRIZ\n");
scanf("%d",&m);
scanf("%d",&n);
printf("\n---------------------------------------------------\n");
printf("\nINGRESE LA FILA Y COLUMNA DE LA SEGUNDA MATRIZ\n");
scanf("%d",&f);
scanf("%d",&c);
printf("\n");
int A[m][n],B[f][c],C[m][c];

srand(time(NULL));


for (i=1;i<=m;i++)
 for (j=1;j<=n;j++)
{
   A[i][j]=rand()%11;
}

for (i=1;i<=f;i++)
   for (j=1;j<=c;j++)
    {
      B[i][j]=rand()%11;
    }


  for (i=1;i<=m;i++){
 for (j=1;j<=n;j++)
{
  printf("%d\t", A[i][j]);
}
printf("\n");
}
for (i=1;i<=f;i++){
   for (j=1;j<=c;j++)
    {
      printf("%d\t", B[i][j]);
    }
    printf("\n");
  }


if (n==f){
 for (i=1;i<=m;i++)
    {for (j=1;j<=c;j++)
       { C[i][j]=0;
         for (k=1;k<=n;k++)
          {C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
       }
    }

 
 printf("\nLA MULTIPLICACION DE LAS MATRICES ES:\n\n");
  for (i=1;i<=m;i++){
   for (j=1;j<=c;j++)
    { printf("%d\t",C[i][j]);
    }
   printf("\n");
}
}
else
{
printf("Estas matrices no se pueden multiplicar \n");
}

}