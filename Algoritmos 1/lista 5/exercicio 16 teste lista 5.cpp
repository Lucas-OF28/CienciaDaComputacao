#include<conio.h>
#include<stdio.h>
main()
{
	int n,i,maior,menor;
	float soma=0;
	for(i=1;i<=5;i++)
	{
	printf("Informe um numero: ");
	scanf("%d",&n);
	soma=soma+n;
	
	if(i==1)
	{
	menor=n;
	maior=n;
	}
	if(n>maior)
	maior=n;
	if(n<menor)
	menor=n;
	}
	printf("Media: %f\n",soma/5);
	printf("Maior: %d\nMenor: %d", maior,menor);
	
	getch();
	
}
