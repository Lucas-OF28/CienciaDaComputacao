#include<stdio.h>
#include<conio.h>
main()
{
	float freq, media;
	char nome[30],desc[30];
	printf("Infome o nome da materia: ");
	gets(nome);
	printf("Infome sua descricao: ");
	gets(desc);
	printf("Informe a frequencia necessaria: ");
	scanf("%f", &freq);
	printf("Informe a media: ");
	scanf("%f", &media);
	printf("Nome: %s\nDescricao: %s\n", nome, desc);
	printf("Frequencia: %f\nMedia: %f", freq, media);
	getch();
	
	
	
}
