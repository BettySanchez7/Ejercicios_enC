#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
//Aún no queda
bool non_par(int);
int main(int argc, char const *argv[])
{
	int pruebas,numero;
	srand(time(NULL));

	printf("Ingrese el numero de casos de pruebas\n");
	scanf("%d",pruebas);
	char *jugadores1[pruebas], *jugadores2[pruebas], *tiro[pruebas];
	for (int i = 0; i < pruebas; i++)
	{
		printf("Jugador1 Jugador2 eleccion: ");
		scanf("%c %c %c",&jugadores1[i], &jugadores2[i],&tiro[i]);
		printf("\n");
	}
	int cont=0,x=0;

	for (int i = 0; i < pruebas; i++)
	{
		for(int j=0;j<tiro[i];j++){
			numero=rand()%6;
			if(tiro[i]=='par'){
				if(non_par(numero)==true)
					cont+=1;
				x+=1;
			}
			else if(tiro[i]=='non'){
				if(non_par(numero)==false)
					cont+=1;
				x+=1;
			}

		}
		printf("%s%d%s%d\n",jugadores1[i],x,jugadores2[i],cont);
	}

	
	

	return 0;
}

bool non_par(int numero){
	if(numero%2==0)
		return true;
	return false;
}
