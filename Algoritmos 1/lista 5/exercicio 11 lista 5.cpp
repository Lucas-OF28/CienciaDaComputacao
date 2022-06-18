#include<conio.h>
#include<stdio.h>
main()
{
	int n,i,par=0,impar=0;
	for(i=1;i<=5;i++)
	{
		printf("Informe o numero: ");
		scanf("%d", &n);
		if (n%2==0)
		par=par+1;
				
	}
	printf("Numeros pares: %d\n", par);
	printf("Numero impares: %d", impar);
	getch();
	
}
