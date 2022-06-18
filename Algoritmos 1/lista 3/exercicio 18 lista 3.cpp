#include<stdio.h>
#include<conio.h>
main()
{
	int cep, cpf, rg, tele;
	char nome[32],endereco[60], cidade[60], uf[60], esco[50], curso[60], datnasc[20];
	printf("Infome seu nome: ");
	gets(nome);
	printf("Infome seu endereco: ");
	gets(endereco);
	printf("Infome sua cidade: ");
	gets(cidade);
	printf("Infome seu estado: ");
	gets(uf);
	printf("Infome sua escolaridade: ");
	gets(esco);
	printf("Infome seu curso: ");
	gets(curso);
	printf("Infome sua data de nascimento: ");
	gets(datnasc);
	printf("Infome seu cep: ");
	scanf("%d", &cep);
	printf("Infome seu cpf: ");
	scanf("%d", &cpf);
	printf("Infome seu rg: ");
	scanf("%d", &rg);
	printf("Infome seu telefone: ");
	scanf("%d", &tele);
	printf("Nome: %s\nEndereco: %s\nCidade: %s\nEstado: %s\nEscolaridade: %s\nCurso: %s\nData de nascimento: %s\n",nome, endereco, cidade, uf, esco, curso, datnasc);
	printf("Cep: %d\nCPF: %d\nRG: %d\nTelefone: %d",cep, cpf, rg, tele);
	getch();
}
