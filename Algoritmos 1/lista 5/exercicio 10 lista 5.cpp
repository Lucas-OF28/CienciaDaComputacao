#include<conio.h>
#include<stdio.h>
main()
{
	int i,n,soma=0,quant=0;
	for(i=1;i<=5;i++)
	{
		printf("Informe um numero: ");
		scanf("%d", &n);
		
		if(n>0)
		soma=soma+n;
		else
		quant=quant+1;
	}
	printf("A soma dos numeros positivos: %d\n",soma);
	printf("Numeros negativos: %d\n",quant);
	getch();
	
}
