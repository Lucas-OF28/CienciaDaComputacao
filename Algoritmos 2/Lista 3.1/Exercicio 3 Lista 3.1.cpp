#include<stdio.h>
#include<stdlib.h>

float media(float n[50], float p[50])

{
	int i;
	float soman=0, somap=0, pond=0;
	for(i=0;i<50;i++)
	{
		soman=soman+n[i]*p[i];
		somap=somap+p[i];
	}
	pond=soman/somap;
	return pond;
}

main()
{
	int i;
	float nota[50], peso[50], result;
	
	for(i=0;i<50;i++)
	{
		printf("Informe a nota %d: ", i+1);
		scanf("%f", &nota[i]);
		printf("Informe o peso %d: ",i+1);
		scanf("%f", &peso[i]);
	}
	result=media(nota, peso);
	printf("A media e: %f", result);
}
