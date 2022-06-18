#include<conio.h>
#include<stdio.h>
main()
{
	int i,soma=0;
	for(i=100;i<=105;i++)
	{
	printf("%d\n",i);
	soma=soma+i;
	}
	printf("Soma = %d",soma);
	getch();
}
