#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int cobro,cobro2,factura,agua,le,lg;
	printf("Introduce el total de litros de agua gastados en un mes: ");
	scanf("%d" ,&agua);
	if(agua<=50)
	{
		printf("\nSu gsto de agua no fue mayor a 50 litros este mes, pero debe pagar una cuota al gobierno de 150 pesos mexicacos");
	}
	if(agua>50 &agua<=200)
	{
		//los primeros 50 litros son gratis//
		lg=50;
		// de 50 a 200 litros de agua se cobran 3 pesos mexicanos por litro//
		agua=agua-lg;
		factura= agua*3;
	printf("\nEl total a pagar de los litros de agua es de: %d pesos mexicanos",factura);
    }
    if (agua>200)
	{
		//los primeros 50 litros son gratis//
		lg=50;
		// de 50 a 200 litros de agua se cobran 3 pesos mexicanos por litro//
		le=agua%200;
		agua=agua-lg-le;
		cobro= agua*3
		// apartir de los 200 litros de agua te cobran 5 pesos mexicanos por litro//
		cobro2= le*5;
		factura=cobro2*cobro;
		printf("\n El total a pagar de litros de agua es de: %d pesos mexicanos",factura);	
	 } 
		return 0;
		getch ();
	}

