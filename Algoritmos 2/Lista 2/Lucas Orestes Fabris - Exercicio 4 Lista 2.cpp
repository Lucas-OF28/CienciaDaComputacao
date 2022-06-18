#include<conio.h>
#include<stdio.h>
#include<string.h>

main()
{
    int tam,tam1,p=0,i=1;
    char frase[50],frase1[50];
    printf("Informe a frase:");
    fflush(stdin);
    gets(frase);
    tam=strlen(frase);
    while(i<tam)
    {
        frase1[p]=frase[i];
        i++;
        p++;
    }
    frase1[tam-1]=frase[0];
    printf("%s\n",frase1);
    tam1=strlen(frase1);
    getch();

}
