#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
   
    FILE *e;
    FILE *s;
   
    char entrada[41];
    char saida[41];
    int c;
   
    printf("Insira o nome do arquivo de entrada: ");
    fflush(stdin);
    scanf("%40s",entrada);
    printf("%s\n",entrada);
   
    printf("Digite o nome do arquivo de sa�da: ");
    fflush(stdin);
    scanf("%40[^\n]",saida);
    printf("%s\n",saida);
   
    e = fopen(entrada,"r");
    printf("%s",e);
    if(e == NULL){
        printf("\nN�o foi poss�vel abrir o arquivo de entrada!");
        exit(1);
    }  
    s = fopen(saida,"w");
    if(s == NULL){
        printf("N�o foi poss�vel abrir o arquivo de sa�da!");
        fclose(e);
        exit(1);
    }
    while((c=fgetc(e))!=EOF){
        fputc(toupper(c),s);
    }
    fclose(e);
    fclose(s);
}
