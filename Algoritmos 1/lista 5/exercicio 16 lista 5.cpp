#include<conio.h>
#include<stdio.h>
main()
{
	int i, n,menor, maior;
	float soma=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Numero: ");
		scanf("%d", &n);
		soma=soma+n;
		if(i==1)
		{
		maior=n;
		menor=n;
		}
		if(n>maior)
		maior=n;
		if(n<menor)
		menor=n;
	}
	printf("Media:%f", soma/5);
	printf("\nMaior:%d\nMenor:%d", maior, menor);
	getch();
	
}
