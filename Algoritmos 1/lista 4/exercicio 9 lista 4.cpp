#include<conio.h>
#include<stdio.h>
#include<math.h>

main()
{
	float n1, n2;
	char opcao;
	printf("Informe um numero: ");
	scanf("%f", &n1);
	printf("Informe outro numero: ");
	scanf("%f", &n2);
	printf("a-Primeiro numero elevado pelo segundo\nb-Raiz quadrada de cada um\nc-Raiz cubica de cada um\n");
	fflush(stdin);
	printf("Informe a opcao: ");
	scanf("%c", &opcao);

	if(opcao=='a')
	{
		printf("Primeiro numero elevado pelo segundo %f", pow(n1,n2));
		
	}
	else
	{
		if(opcao=='b')
		{
		printf("Raiz quadrada do primeiro: %f\n", sqrt(n1));
		printf("Raiz quadrada do segundo: %f", sqrt(n2));			
		}
		else if (opcao=='c')
		{
		printf("Raiz cubica do primeiro: %f\n", pow(n1,1.0/3.0));
		printf("Raiz cubica do segundo: %f", pow(n2,1.0/3.0));	
		}
	 else
	 {
	 printf("Nao existe");
	 }
	}
	
	getch();
	
}
	
