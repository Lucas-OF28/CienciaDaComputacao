#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int verifica(int n)
{
 	if (n%2==0)
 	{
 		return 0;
 	}
 	else
 	{
 		return 1;
 	}
}


	main()
{
int n, x;
printf("\nDigite um numero:");
scanf("%d", &n);
x=verifica(n);
if(x==0)
{
 	printf("Par");
}
 else
{
 	printf("Impar");
}
getch();
}
