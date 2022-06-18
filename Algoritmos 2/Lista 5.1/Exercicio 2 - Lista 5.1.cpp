#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	int idade, nfilhos;
	float sal;
	char sexo;
}hab;

void ler(hab *h, float *somas, float *somaf);
void mostrarsal(hab *h, float msal);
void mostrarfil(hab *h, float mfil);
main()
{
	hab h[3];
	int i;
	float msal=0, mfil=0;
	ler(h, &msal, &mfil);
	printf("\nSalarios inferiores a media\n");
	mostrarsal(h, msal);
	printf("\nNumero de filhos superior a media\n");
	mostrarfil(h, mfil);
	system("pause");	
}

void ler(hab *h, float *somas, float *somaf)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Idade: "); scanf("%d", &h[i].idade);
		printf("Sexo:");fflush(stdin);scanf("%c", &h[i].sexo);
		printf("Numero de filhos: ");scanf("%d", &h[i].nfilhos);
		printf("Salario: ");scanf("%f", &h[i].sal);
		*somas=*somas+h[i].sal;
		*somaf=*somaf+h[i].nfilhos;
	}
	*somaf=*somaf/3;
	*somas=*somas/3;
}


void mostrarsal(hab *h, float msal)
{
	int i;
	for(i=0;i<3;i++)
	{
		if(h[i].sal<msal)
		{
			printf("Idade: %d\t", h[i].idade);
			printf("Sexo: %c\t", h[i].sexo);
			printf("Numero de filhos: %d\t", h[i].nfilhos);
			printf("Salario: %f\n", h[i].sal);
		}
	}
}
void mostrarfil(hab *h, float mfil)
{
	int i;
	for(i=0;i<3;i++)
	{
		if(h[i].nfilhos>mfil)
		{
			printf("Idade: %d\t", h[i].idade);
			printf("Sexo: %c\t", h[i].sexo);
			printf("Numero de filhos: %d\t", h[i].nfilhos);
			printf("Salario: %f\n", h[i].sal);
		}
	}
}


