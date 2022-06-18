#include<stdio.h>
#include<conio.h>
main()
{
	int A[5],i,maior=0, menor=0;
	float soma=0;
	for(i=0;i<5;i++)
	{
	printf("Numero: ");
	scanf("%d", &A[i]);
	soma=soma+A[i];
		if(A[i]>maior)
		maior=A[i];
		if(A[i]<menor)
		menor=A[i];
	} 
	for(i=0;i<5;i++)
	{
	printf("%d\t",A[i]);
	}
	printf("\nMaior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Media: %f\n", soma/5);
	getch();
	
}
