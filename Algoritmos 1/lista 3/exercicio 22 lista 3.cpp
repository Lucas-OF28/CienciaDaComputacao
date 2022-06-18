#include<stdio.h>
#include<conio.h>
main()
{
	int n1, suc, ant;
	printf("Informe um numero: ");
	scanf("%d", &n1);
	suc=n1+1;
	ant=n1-1;
	printf("Seu numero sucessor sera: %d\nSeu antecessor sera: %d", suc, ant);
	getch();
	
}
