#include <stdio.h>
main()
{
	int n;
	printf("ingrese un numero/n");
	scanf("%d",&n);
	if (n%2==0)
	{
		printf("%d es par",n);
		}	
		else
		{
			printf("%d es impar",n);
		}
		getchar();
		return 0;
}
