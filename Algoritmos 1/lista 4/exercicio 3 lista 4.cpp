#include<stdio.h>
#include<conio.h>
main()
{
	float n1, n2, n3, n4, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	printf("Informe a quarta nota: ");
	scanf("%f", &n4);
	media=(n1+n2+n3+n4)/4;
	if(media>6)
	{
	printf("Sua media sera: %f\n", media);
	printf("Aprovado");
		
	}
	else
	{
	printf("Sua media sera: %f\n", media);
	printf("Reprovado");
	
	}
	getch();
	
}

