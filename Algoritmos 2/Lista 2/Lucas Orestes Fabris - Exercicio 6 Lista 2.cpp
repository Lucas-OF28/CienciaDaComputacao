#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int i, j=0, tam=0, tam1=0,tam2=0;
	char pal1[4], pal2[4], pal3[8];
	printf("Informe uma palavra: ");
	fflush(stdin);
	gets(pal1);
	printf("Informe a segunda palavra: ");
	fflush(stdin);
	gets(pal2);
	tam1=strlen(pal1);
	tam2=strlen(pal2);
	tam=tam1+tam2;
	for (i=0;i<tam;i++)
	{
		pal3[j]=pal1[i];
		j++;
		pal3[j]=pal2[i];
		j++;
	}
	printf("A string intercalada sera: %s", pal3);
	getch();
	
}
