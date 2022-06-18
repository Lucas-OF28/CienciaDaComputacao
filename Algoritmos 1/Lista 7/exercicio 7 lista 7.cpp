#include<conio.h>
#include<stdio.h>
main()
{
	int A[5],i;
	float soma=0;
	for(i=0;i<5;i++)
	{
	printf("Numero: ");
	scanf("%d", &A[i]);
	if(A[i]>0)
	printf("\nNegativo nao encontrado\n");
	else
	soma=soma+A[i];
	}
	printf("O indice dos numeros negativos sera: %f",soma/5);
	getch();
	
	
}
