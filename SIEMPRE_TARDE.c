//SIEMPRE TARDEEE.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int registro;
	puts("Numero de registros:_" );
	scanf("%d",&registro);
	int oHora[registro],oMinuto[registro],aHora[registro], aMinuto[registro];

	for(int i=0;i<registro;i++)
	{
		scanf("%d%d%d%d",&oHora[i], &oMinuto[i],&aHora[i], &aMinuto[i]);
		if(oMinuto[i]>60 || aMinuto[i]<0 || (oHora[i]<8 && oHora[i]>20) || (aHora[i]<oHora[i] && aHora[i]>oHora[i]+1)){
			printf("No esta dentro del rango\n");
		}
	}
	int minutos=0;
	for (int i = 0; i < registro; i++)
	{

		if(oHora[i]==aHora[i]){
			minutos=minutos+(aMinuto[i]-oMinuto[i]);
		}else if(oHora[i]==(aHora[i]-1)){
			minutos=minutos+(60-oMinuto[i]);
		}
		printf("minutos:%d\n", minutos);

	}
	printf("%d",minutos/registro);




	
		
}