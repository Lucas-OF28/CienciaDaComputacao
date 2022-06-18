#include<stdio.h>
#include<stdlib.h>


struct Pessoa
{ 
	char nome[30];
	int idade;
} p[3];
int main()
{
	
	int i, idade;
	for(i=0;i<3;i++)
	{ 
		do
		{
		printf("informe o nome: ");
		scanf("%s", &p[i].nome);
		printf("informe idade: ");
		scanf("%d", &p[i].idade);
		}while(p[i].idade>45);
	}     
		
	for(i=0;i<3;i++)     
	{         
		{
  		printf("Nome: %s\n", p[i].nome);
		printf("Idade: %d\n", p[i].idade);
		}
	} 
	system("pause");
}
