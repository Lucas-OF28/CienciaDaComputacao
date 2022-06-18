#include<stdio.h>
#include<conio.h>
main()
{
	float n1,n2,n3,media, p1, p2,p3;
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	p1=2;
	p2=3;
	p3=5;
	media=(n1+n2+n3)/(p1+p2+p3);
	printf("Sua media ponderada sera de: %f", media);
	getch();
	
}
