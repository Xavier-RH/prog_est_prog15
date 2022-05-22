/* Autor: Xavier Romero Hernández, Realizado: 17/02/2022 

	*/
	
#include <stdio.h>

int main(){
	float precioft1,precioft2,precioft3,area,preciobase,a;

	printf("Introduce el precio base del modelo colonial: ");
	scanf("%f",&preciobase);
	printf("Introduce el area del terreno en ft2 del modelo colonial: ");
	scanf("%f",&area);
	
	precioft1=preciobase/area;
	printf("\nModelo colonial:");
	printf("\nPrecio base\t\tArea\t\tPrecio por ft2");
	printf("\n$%.2f\t\t%.2f ft2\t$%.2f",preciobase,area,precioft1);
	
	printf("\n\nIntroduce el precio base del modelo de entrada dividida: ");
	scanf("%f",&preciobase);
	printf("Introduce el area del terreno en ft2 del modelo de entrada dividida: ");
	scanf("%f",&area);
	
	precioft2=preciobase/area;
	printf("\nModelo de entrada dividida:");
	printf("\nPrecio base\t\tArea\t\tPrecio por ft2");
	printf("\n$%.2f\t\t%.2f ft2\t$%.2f",preciobase,area,precioft2);
	
	printf("\n\nIntroduce el precio base del modelo de una sola planta: ");
	scanf("%f",&preciobase);
	printf("Introduce el area del terreno en ft2 del modelo una sola planta: ");
	scanf("%f",&area);
	
	precioft3=preciobase/area;
	printf("\nModelo de una sola planta:");
	printf("\nPrecio base\t\tArea\t\tPrecio por ft2");
	printf("\n$%.2f\t\t%.2f ft2\t$%.2f\n",preciobase,area,precioft3);
	
	if(precioft1<precioft2){
        if(precioft1<precioft3)
            a=precioft1;
        else
            a=precioft3;
        }
    else{
        if(precioft2<precioft3)
            a=precioft2;
        else
            a=precioft3;
        }
            
	if(precioft1==a)printf("\nLa opcion del modelo colonial es la de menor precio por ft2");
	if(precioft2==a)printf("\nLa opcion del modelo de entrada dividida es la de menor precio por ft2");
	if(precioft3==a)printf("\nLa opcion del modelo de una sola planta es la de menor precio por ft2");
	return 0;
}
