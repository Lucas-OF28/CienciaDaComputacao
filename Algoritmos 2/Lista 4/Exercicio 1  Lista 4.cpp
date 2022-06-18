#include<stdio.h>
#include<stdlib.h>

float calc_media(float notas[3], float *ma, float *me);

main()
{
	float nota[3], media, maior=-999, menor=999;
	int i;
	for(i=0;i<3;i++)
	{
		printf("Informe a nota %d: ", i+1); scanf("%f", &nota[i]);
	}
	media=calc_media(nota, &maior, &menor);
	printf("Media: %f\nMaior nota: %f\nMenor nota: %f", media, maior, menor);
	system("pause");
}

float calc_media(float notas[3], float *ma, float *me)
{
	int i;
	float soma=0;
	for(i=0;i<3;i++)
	{
		soma=soma+notas[i];
		if(notas[i]>*ma)
			*ma=notas[i];
		if(notas[i]<*me)
			*me=notas[i];
	}
	return soma/3;
}
