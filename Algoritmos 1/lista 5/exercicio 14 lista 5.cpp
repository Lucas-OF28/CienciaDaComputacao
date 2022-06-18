#include<conio.h>
#include<stdio.h>
main()
{
	int n,i,soma=0;
		printf("Informe um numero: ");
		scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		soma=soma+i;
	}
	printf("A soma sera: %d",soma);
	getch();
}
