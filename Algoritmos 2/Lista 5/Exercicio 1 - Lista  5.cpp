#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	float pg;
	char nome[30], editora[30];
} Revista;

void ler(Revista r[3]);
void mostrar(Revista r[3]);

main()
{
	Revista rev[3];
	ler(rev);
	mostrar(rev);
	system("pause");
}
void ler(Revista r[3])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Nome: ");scanf("%s", &r[i].nome);
		printf("Editora: ");scanf("%s", &r[i].editora);
		printf("Paginas: ");scanf("%f", &r[i].pg);
	}
}
void mostrar(Revista r[3])
{
	int i, maior=-999, menor=9999, pma=-1, pme=-1;
	for(i=0;i<3;i++)
	{
		printf("Nome: %s\n", r[i].nome);
		printf("Editora: %s\n", r[i].editora);
		printf("Paginas: %f\n", r[i].pg);
		if(r[i].pg>maior)
		{
			maior=r[i].pg;
			pma=i;
		}
		if(r[i].pg<menor)
		{
			menor=r[i].pg;
			pme=i;
		}
	}
	printf("Revista com maior numero de paginas: %s\n", r[pma].nome);
	printf("Revista com menor numero de paginas: %s\n", r[pme].nome);
}

