#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,media;
	printf("Informe a primeira nota: ");
	scanf("%d",&n1);
	printf("Informe a segunda nota: ");
	scanf("%d",&n2);
	media=(n1+n2)/2;
	printf("A media das notas sera: %d", media);
	getch();
}
