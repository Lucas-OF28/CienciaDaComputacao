#include<conio.h>
#include<stdio.h>
main()
{
	int i,n, maior,menor,cont=0;
	float soma=0;
	printf("Informe um numero: ");
	scanf("%d",&n);
	while(n!=0)
	{
	soma=soma+n;
	cont++;
	if(n>maior)
	maior=n;
	if(n<menor)
	menor=n;	
	printf("Informe um numero: ");
	scanf("%d",&n);
	}
	printf("Media: %f\n",soma/cont);
	printf("Maior: %d\nMenor: %d\n",maior,menor);
	getch();
}
