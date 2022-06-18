#include<conio.h>
#include<stdio.h>
main()
{
	int quant,n1,i,maior=0,menor=0;
	float media,perc, impar=0,soma=0;
	printf("Informe a quantidade: ");
	scanf("%d",&quant);
	for(i=1;i<=quant;i++)
	{	
		printf("Informe um numero: ");
		scanf("%d", &n1);
		soma=soma+n1;
		if(i==1)
		{
			maior=n1;
			menor=n1;
		}
		if(n1>maior)
		   maior=n1;
		if(n1<menor)
		   menor=n1;
		if(n1%2>0)
		impar=impar+1;
	}
	
	printf("Quantidade: %d\n",quant);
	printf("Soma: %f\n",soma);
	printf("Media: %f\n",soma/quant);
	printf("Maior: %d\nMenor: %d\n",maior,menor);
	printf("Percentual de impar: %f", (impar/quant)*100.0);
	getch();
}
