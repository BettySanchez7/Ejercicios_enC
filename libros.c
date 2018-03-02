
#include <stdio.h>
#include <stdlib.h>
long long int paginas(long int);
int main(){
	
	int ejecuciones;

	printf("Ingrese el numero de ejecuciones de su programa\n" );
	scanf("%d",&ejecuciones);
	long int digitos[ejecuciones];

	for(int i=0; i<ejecuciones;i++){
		scanf("%ld",&digitos[i]);
	}
	for(int i=0; i<ejecuciones;i++){
		if((paginas(digitos[i]))==0)
			printf("imposible\n");
		else{printf("PAGINAS :%ld\n",paginas(digitos[i]));}
		
	}


	return EXIT_SUCCESS; 
}




///FUNCIÓN QUE CALCULA EL NUMERO DE PAGINAS
long long int paginas(long int digitos){
	int paginas=0;
	printf("%ld\n", digitos);
	if(digitos%2==0){
		return 0;
	}
	
	for (int i=1;i<=digitos;i++){
		if(i<=9){
			paginas=paginas+1;
		}
	}
	int sum=(digitos-9)/2;

	return paginas+sum;
}
