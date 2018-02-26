#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//Declaracion de funciones
void range (int,int,int,int[]); //recibe tres enteros y un arreglo
int size(int,int,int);
bool is_magic_date(int,int,int);
int days_in_month(int, int);

int main(){
   /* int years[size(1900,2000,1)];
    range(1900,2000,1,years);

    int months[size(1,13,1)];
    range(1,13,1,months);

    int days[size(1,32,1)];
    range(1,32,1,days);

    for(int y=0;y<size(1900,2000,1);y++)
        for(int m=0;m<size(1,13,1);m++)
            for(int d=0; d<size(1,32,1);d++){
                if(is_magic_date(days[d],months[m],years[y]))
                    printf("%d/%d/%d es una fecha magica\n",days[d], months[m],years[y]);
            }

*/
    int mes,num,anio;
    printf("Ingrese el mes y anio \n");
    scanf("%d %d",&mes,&anio);
    num=days_in_month(mes,anio);
    printf("%d\n",num );

return EXIT_SUCCESS; 
}

//Definicion de funciones
void range (int start,int stop,int step,int arreglo[]){

    int elementos=size(start,stop,step);
    for(int i=0, value=start;i<elementos; i++,value +=step)
        arreglo[i]=value;
    
}

int size(int start,int stop,int step){
    return ceil((float)(stop-start)/step);
}

bool is_magic_date(int day,int month,int year){
    if(day*month== year%100)
        return true;
    return false;
}

int days_in_month(int mes, int anio){
    if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
        return 31;
    if(mes==4||mes==6||mes==9||mes==11)
        return 30;
    if(((anio%100==0)&& (anio%4==0))||((anio%100!=0)&& (anio%4==0))){
        return 29;
    }else{
        return 28;}
    }
    
    




