#include<conio.h>
#include<stdio.h>
main()
{

char letra;

printf("Letra: ");
fflush(stdin);
scanf("%c", &letra);

while(letra!='f' && letra!='F')
{	
	printf("Letra: ");
	fflush(stdin);
	scanf("%c", &letra);
}
getch();

}

