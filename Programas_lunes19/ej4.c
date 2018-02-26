#include <stdio.h>
#include <stdlib.h>


int main(){
char columna;
int fila;


printf("Ingrese el numero de fila y la letra de lcolumna: (fila  columna)");

scanf("%d  %d", &fila,&columna);


for(int i=0;i<8;i++){
	if(fila%2==0){
		if(columna%2==0){
			printf("Es blanco");
		}else{
			printf("Es negro\n");
		}

	}



	else{
		if(columna%2==0){
			printf("Es negro");
		}else{
			printf("Es blanco\n");
		}

	}

}
}



