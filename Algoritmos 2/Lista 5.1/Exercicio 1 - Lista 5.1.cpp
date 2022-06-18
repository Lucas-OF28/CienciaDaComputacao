
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nome[30], sexo;
	float sal;
	int id;
}trab;

void ler(trab *t);
void exibir(trab *t);
void mostrasexo(trab *t, char sexo);
void atualizasal(trab *t, float tx);

main()
{
	char sexo;
	float tx;
	trab t[3];
	ler(t);
	exibir(t);
	printf("Informe um sexo para pesquisa: "); fflush(stdin);scanf("%c", &sexo);
	mostrasexo(t, sexo);
	printf("Informe uma taxa de aumento: "); scanf("%f", &tx);
	atualizasal(t, tx);
}


void ler(trab *t)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Codigo: "); scanf("%d", &t[i].id);
		printf("Nome: "); fflush(stdin);gets(t[i].nome);
		printf("Sexo: "); fflush(stdin);scanf("%c", &t[i].sexo);
		printf("Salario: "); scanf("%f", &t[i].sal);
	}
}

void exibir(trab *t)
{
int i;
	printf("\n\nFuncionarios\n");
	for(i=0;i<3;i++)
	{
		printf("Codigo: %d\t", t[i].id);
		printf("Nome: %s\t", t[i].nome);
		printf("Sexo: %c", t[i].sexo);
		printf("Salario: %f\n", t[i].sal);
	}	
}

void mostrasexo(trab *t, char sexo)
{
	int i;
	printf("\n\nSexo\n");
	for(i=0;i<3;i++)
	{
		if(t[i].sexo==sexo)
		{
			printf("Codigo: %d\t", t[i].id);
			printf("Nome: %s\t", t[i].nome);
			printf("Sexo: %c", t[i].sexo);
			printf("Salario: %f\n", t[i].sal);
		}
	}	
}

void atualizasal(trab *t, float tx)
{
		int i;
	printf("\n\nSalarios atualizados\n");
	for(i=0;i<3;i++)
	{
			printf("Nome: %s\t", t[i].nome);
			printf("Salario antigo: %f\t", t[i].sal);
			t[i].sal=t[i].sal*tx/100 + t[i].sal;
			printf("Salario atualizado: %f\n", t[i].sal);
		}
	}	

