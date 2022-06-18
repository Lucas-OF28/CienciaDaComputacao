/*

Projeto: Inserção direta por busca binária

Função:  Ordenação com Inserção direta por busca binária.	

Autor: Jean Carlos Ricken, Lucas Orestes Fabris, Marcos Machado Medeiros

Alteração:
Data: 06/07/2021

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>

double time_spent;
const int run = 32;
int countVerify = 0;
int countChanges = 0;
int tamanho;
int op;

void dadosExec(double comeco,double fim);
void insertionSort(int a[], int n);
void insertSort();
int binarySearch(int a[], int item, int low, int high);
void cabecalho();
void retornar();

main(){
	setlocale(LC_ALL,"Portuguese");	
	cabecalho();
}

void dadosExec(double comeco,double fim){
	time_spent += (double) (fim - comeco) / CLOCKS_PER_SEC;
    printf("\nO tempo de execução foi de %.10f segundos!\n", time_spent);
    printf("O número de verificações foi de %d e o número de mudanças foi de %d!\n\n",countVerify, countChanges);
    printf("Aguarde para retornar!");
    sleep(8);
    countVerify = 0;
    countChanges = 0;
    time_spent=0;
}

void insertionSort(int a[], int n){
    int i, loc, j, k, selected;
    
    clock_t start = clock();
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        selected = a[i];
 
        loc = binarySearch(a, selected, 0, j);
 
        while (j >= loc)
        {
        	countVerify++;
            a[j + 1] = a[j];
            j--;
            countChanges++;
        }
        a[j + 1] = selected;
        countChanges++;
    }
    clock_t end = clock();
    for(i=0;i<tamanho;i++){
    	printf("%d\t", a[i]);
	}
	
	dadosExec(start,end);
	printf("\n");
}

int binarySearch(int a[], int item, int low, int high)
{
    if (high <= low){
    	countVerify=+2;
    	return (item > a[low]) ? (low + 1) : low;
	}
        
 
    int mid = (low + high) / 2;
 
    if (item == a[mid]){
    	countVerify++;
    	return mid + 1;
	}
 
    if (item > a[mid]){
    	countVerify++;
    	return binarySearch(a, item,  mid + 1, high);
	}
    return binarySearch(a, item, low, mid - 1);
}

void retornar(){
	system("cls");
	cabecalho();
}

void cabecalho(){
	int i, j, temp;
	printf("\tInserção direta com busca binária\t\n\n");
	
	printf("Digite o tamanho da lista: ");
	scanf("%d",&tamanho);
	int vetor[tamanho];
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    
	insertionSort(vetor, tamanho);
			
	retornar();
}
