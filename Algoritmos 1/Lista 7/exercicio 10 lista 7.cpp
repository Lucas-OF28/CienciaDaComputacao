#include<conio.h>
#include<stdio.h>
main()
{
	int A[5],i,ND,pos;
	printf("Vetor A\n");
	for(i=0;i<5;i++)
	{
		printf("Numeros: ");
		scanf("%d", &A[i]);
	}
	printf("\nInforme o numero desejado: ");
	scanf("%d", &ND);
	for(i=0;i<5;i++)
	{
	if(ND == A[i])
	{
		pos=i;
		break;
	}
	}
	if(pos !=-1)
	{
		printf("O elemento %d foi encontrado na posicao %d", ND,pos);
	}
	else
	{
	printf("\nNao encontrado");
	}
	getch();
	
	
}
