#include<conio.h>
#include<stdio.h>
main()
{
	int X[10],i,menor=999,maior=-999,dif,posme=-1,posma=-1;
	for(i=0;i<10;i++)
	{
	printf("Numero: ");
	scanf("%d", &X[i]);
	if(X[i]>maior)
	{
	maior=X[i];
	posma=i;
	}
	if(X[i]<menor)
	{
	menor=X[i];
	posme=i;
	}
	}
	dif=maior-menor;
	printf("A diferenca sera de: %d\n", dif);
	printf("Posicao do maior: %d\n",posma);
	printf("Posicao do menor: %d\n",posme);
	getch();
}
