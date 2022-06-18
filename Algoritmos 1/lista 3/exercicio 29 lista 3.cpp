#include<stdio.h>
#include<conio.h>
main()
{
	float n1,n2,n3,media, p1, p2,p3, peso;
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe o primeiro peso: ");
	scanf("%f", &p1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	printf("Informe o segundo peso: ");
	scanf("%f", &p2);
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	printf("Informe o terceiro peso: ");
	scanf("%f", &p3);
	peso=p1+p2+p3;
	media=(n1+n2+n3)/peso;
	printf("Sua media ponderada sera de: %f", media);
	getch();
	
}
