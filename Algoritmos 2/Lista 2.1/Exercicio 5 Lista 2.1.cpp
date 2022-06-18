#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()

{
	int i=0, j, conta=0, total;
	char frase[50], temp[50];
	
	printf("Informe uma frase: ");
	fflush(stdin);
	gets(frase);
	
	strcpy(temp, frase);
	total=strlen(frase);
	
	while(frase[i]!='\0')
	{
		for(j=i;j<total;j++)
		{
			if(temp[j]==frase[i] && frase[i] !=' ')
			{
				conta++;
				temp[j]=' ';
			}
		}
		if( conta>1 && isspace(frase[i])==0)
		{
			printf("A letra %c apareceu %d vezez \n", frase[i], conta);
		}
		conta=0;
		i++;
		
	}
	getch();
}
