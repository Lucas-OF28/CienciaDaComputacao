#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

char txt[100];
int conta = 0, j;
char i;

FILE *arq;
arq = fopen("arquivo1.txt", "r");


if(arq == NULL)
printf("Erro ao tentar abrir o arquivo.\n");
else{
  while(fgets(txt,100,arq) != NULL){
    for(i = 'A'; i <= 'Z'; i++)
    {
      for(j = 0; txt[j] != '\0'; j++)
      {
        if(txt[j]==i || txt[j] == tolower(i))
        {
        ++conta;
        }
    }
    if(conta != 0)
    {
      printf("%c - %d vezes\n", i, conta);
    }
    conta = 0;
    }
    }
}
return 0;
}
