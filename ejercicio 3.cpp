#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int modulo,num,elev;
	printf("introduce el numero: ");
	scanf("%d",&num);
	modulo=num%2;
	if(modulo==0)
	{
		printf("\nEl numero es par");
		elev=pow(num,2);
		    printf("\nElnumero elevado al cuadrado es: %d",elev);
	}
	else
	{
		printf("\nEl numero es impar");
		elev=pow(num,3);
		    printf("\nEl numero elevado al cubo es: %d",elev);
	}
	return 0;
	getch();
}
