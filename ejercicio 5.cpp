#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
	
	printf ( "Introduce el dinero: " );
	scanf ( " % d " , & dinero);
	si (dinero> = 1000 );
	{
		printf ( " \ n % d billete (s) de 1000 pesos mexicanos " , dinero / 1000);
		dinero = dinero% 1000 ;
	}
	si (dinero> = 500 );
	{
		printf ( " \ n % d billete (s) de 500 pesos mexicanos " , dinero / 500);
		dinero = dinero% 500 ;
    }
    si (dinero> = 200 );
    {
    	printf ( " \ n % d billete (s) de 200 pesos mexicanos " , dinero / 200);
		dinero = dinero% 200 ;
	}
	
    si (dinero> = 100 );
	{
	   	printf ( " \ n % d billete (s) de 100 pesos mexicanos " , dinero / 100);
		dinero = dinero% 100 ;
	}
    si (dinero> = 50 );
    {
    	printf ( " \ n % d billete (s) de 50 pesos mexicanos " , dinero / 50);
    	dinero = dinero% 50 ;
   	}
    si (dinero> = 20 );
    {
    	printf ( " \ n % d billete (s) de 20 pesos mexicanos " , dinero / 20);
       	dinero = dinero% 20 ;
	}
	si (dinero> = 10 );
	{
		printf ( " \ n % d moneda (s) de 10 pesos mexicanos " , dinero / 10);
       	dinero = dinero% 10 ;	
	}
    si (dinero> = 5 );
	{
		printf ( " \ n % d moneda (s) de 5 pesos mexicanos " , dinero / 5);
       	dinero = dinero% 5 ;	
	}	
	  si (dinero> = 2 );
	{
		printf ( " \ n % d moneda (s) de 2 pesos mexicanos " , dinero / 2);
       	dinero = dinero% 2 ;
    }
     si (dinero> = 1 );
	{
		printf ( " \ n % d moneda (s) de 1 pesos mexicanos " , dinero / 1);
       	dinero = dinero% 1 ;
    } 
    devuelve 0;
    getch ();
    

    
}

