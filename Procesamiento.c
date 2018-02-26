#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int m,n,f,c,i,j,k,llenar;

  //LLENADO DE MATRICES

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
   //A[i][j]=rand()%2;
	printf("Ingrese 0 o 1\n");
	scanf("%d",&llenar);
	A[i][j]=llenar;
}

for (i=1;i<=f;i++)
   for (j=1;j<=c;j++)
    {
     // B[i][j]=rand()%2;
    printf("Ingrese 0 o 1\n");
	scanf("%d",&llenar);
	B[i][j]=llenar;
    }


for (i=1;i<=m;i++){
for (j=1;j<=n;j++)
{
  printf("%d\t", A[i][j]);
}
printf("\n");
}
printf("\n");
for (i=1;i<=f;i++){
   for (j=1;j<=c;j++)
    {
      printf("%d\t", B[i][j]);
    }
    printf("\n");
  }
  //////////////////

  for (i=1;i<=f;i++){
   for (j=1;j<=c;j++){
   		if(B[1][1]==A[i][j]){
   			//COMPARANDO RENGLONES
   			for(int i;i<m;i++){
   				if(B[i+1][i]==A[])
   			}
   		}

   }
}


}