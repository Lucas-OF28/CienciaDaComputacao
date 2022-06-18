/*

Projeto: Máximo e mínimo, múltiplos métodos de ordenação e fatorial

Função:  Ordenação com Inserção Direta, Selection Sort, 
Bubble Sort, Comb Sort, Merge Sort, HeapSort, Shell Sort, 
Timsort, Quick Sort, cálculo de fatorial.	

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

double time_spent = 0.0;
const int run = 32;
int op;
int countVerify = 0;
int countChanges = 0;
int tamanho;
void retornar();
void dadosExec(double comeco, double fim);
void pedeTamanho();
void insertSort();
void insertionSort(int a[], int n);
void selectionSort();
void bubbleSort();
void combSort();
void mergeSort();
void mergin(int vetor[], int l, int r);
void heapSort();
void heapify(int vetor[], int n, int i);
void shellSort();
void timSort();
void quickSort();
void quick(int vetor[],int first,int last);
void fatorial();
void cabecalho();
void randomInsert();
void muda(int *xp, int *yp);
int minimo(int a, int b);
void resultado(int *maior, int *menor);

main(){
	
	setlocale(LC_ALL,"Portuguese");	
	cabecalho();
}

void muda(int *xp, int *yp){
	int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
    countChanges+=2;
}

int minimo(int a, int b){  
    if(a<b){
    	countVerify++;
    	return a;  
	}
    else{
    	countVerify++;
    	return b; 
	}
} 

void retornar(){
	system("cls");
	cabecalho();
}

void pedeTamanho(){
	system("cls");
	printf("Digite o tamanho da lista: ");
	scanf("%d",&tamanho);
}

void dadosExec(double comeco, double fim){
	time_spent += (double)(fim - comeco) / CLOCKS_PER_SEC;
    printf("O tempo de execução foi de %.10f segundos\n", time_spent);
    printf("O número de verificações foi de %d e o número de mudanças foi de %d",countVerify, countChanges);
    sleep(8);
    countVerify = 0;
    countChanges = 0;
    time_spent=0.0;
}

void insertSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    printf("\n");
	insertionSort(vetor, tamanho);
	
	clock_t end = clock();
	printf("\n\n");
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
	printf("\n\n");
    
    dadosExec(begin,end);
}

void selectionSort(){
	int vetor[tamanho], i;
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    printf("\n");
	int j, min_idx;

    for (i = 0; i < tamanho-1; i++)
    {
        // Acha o elemento minimo no array embaralhado
        min_idx = i;
        for (j = i+1; j < tamanho; j++)
          if (vetor[j] < vetor[min_idx]){
            min_idx = j;
			countVerify++;
		  }
        // Muda o elemento minimo com o primeiro do array
        muda(&vetor[min_idx], &vetor[i]);
    }
    clock_t end = clock();
    printf("\n\n");
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
	printf("\n\n");
	dadosExec(begin,end);
}

void bubbleSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    for (i = 0; i < tamanho-1; i++)     
       for (j = 0; j < tamanho-i-1; j++)
           if (vetor[j] > vetor[j+1]){
              muda(&vetor[j], &vetor[j+1]);
              countVerify++;
           }
              
    clock_t end = clock();
    printf("\n\n");
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
    printf("\n\n");
    dadosExec(begin,end);
}

void combSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    
	bool swaps = true;
	int gap = tamanho;
	
	while (gap > 1 || swaps)
	{
		countVerify++;
		gap /= 1.247330950103979;

		if (gap < 1){
			gap = 1;
			countVerify++;
		}

		int i = 0;
		swaps = false;

		while (i + gap < tamanho)
		{
			countVerify++;
			int igap = i + (int)gap;

			if (vetor[i] > vetor[igap])
			{
				countVerify++;
				int temp = vetor[i];
				vetor[i] = vetor[igap];
				vetor[igap] = temp;
				countChanges+=2;
				swaps = true;
			}
			++i;
		}
	}
	clock_t end = clock();
	printf("\n\n");
	for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
	printf("\n\n");
	dadosExec(begin,end);
}

void mergeSort(){
	int i, vetor[tamanho];
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++){
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    mergin(vetor, 0, tamanho-1);
    clock_t end = clock();
    printf("\n\n");
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
   	printf("\n\n");
    dadosExec(begin,end);
}

void mergin(int vetor[], int l, int r){
	int temp, i;
    
    if(l < r){
    	countVerify++;
        int m = l + (r - l) / 2;
 		
        mergin(vetor, l, m);
        mergin(vetor, m + 1, r);
        
 		int i, j, k;
    	int n1 = m - l + 1;
    	int n2 = r - m;
 
    	int L[n1], R[n2];

    	for (i = 0; i < n1; i++){
        	L[i] = vetor[l + i];
        	countChanges++;
        }
    	for (j = 0; j < n2; j++){
    		R[j] = vetor[m + 1 + j];
    		countChanges++;
		}
        
 
    	i = 0; 
    	j = 0; 
    	k = l; 
   		while (i < n1 && j < n2) {
   			countVerify++;
        	if(L[i] <= R[j]) {
        		countVerify++;
            	vetor[k] = L[i];
            	countChanges++;
            	i++;
        	}
        	else{
        		countVerify++;
            	vetor[k] = R[j];
            	countChanges++;
            	j++;
        	}
        	k++;
    	}

    	while (i < n1) {
    		countVerify++;
        	vetor[k] = L[i];
        	countChanges++;
        	i++;
        	k++;
    	}
 
    	while (j < n2) {
    		countVerify++;
        	vetor[k] = R[j];
        	countChanges++;
        	j++;
        	k++;
    	}   
    }
}

void heapSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    for (int i = tamanho / 2 - 1; i >= 0; i--)
      	heapify(vetor, tamanho-1, i);
  
  	
    for (int i = tamanho - 1; i >= 0; i--) {
    	muda(&vetor[0], &vetor[i]);
  
      	heapify(vetor, i, 0);
    }
    clock_t end = clock();
    printf("\n\n");
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
	printf("\n\n");
	dadosExec(begin,end);
}

void heapify(int vetor[], int n, int i){
	int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && vetor[left] > vetor[largest]){
    	countVerify++;
    	largest = left;
	}
  
    if (right < n && vetor[right] > vetor[largest]){
    	countVerify++;
    	largest = right;
	}

    if (largest != i) {
      countVerify++;
      muda(&vetor[i], &vetor[largest]);
      heapify(vetor, n, largest);
    }
}

void shellSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    
	for(int interval = tamanho / 2; interval > 0; interval /= 2) {
    	for(int i = interval; i < tamanho; i += 1) {
      		int temp = vetor[i];
      		int j;
      		for (j = i; j >= interval && vetor[j - interval] > temp; j -= interval) {
        		vetor[j] = vetor[j - interval];
        		countChanges++;
      		}
      		countChanges++;
      		vetor[j] = temp;
    	}
  	}
  	clock_t end = clock();
  	printf("\n\n");
  	for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
	printf("\n\n");
	dadosExec(begin,end);
}

void timSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    int size,beg,mid,end;  
    for (i = 0; i < tamanho; i+=run)  
       
    for (size = run; size < tamanho; size = 2*size)  
    {
        for (beg = 0; beg < tamanho; beg += 2*size)  
        { 
            end = minimo((beg + 2*size - 1), (tamanho-1));  
   
            mergin(vetor, beg, end);  
        } 
    }  
    clock_t fim = clock();
    printf("\n\n");
	    
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
    printf("\n\n");
    dadosExec(begin,fim);
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

void insertionSort(int a[], int n){  
    int i, loc, j, k, selected, temp;
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && a[j-1] > a[j])
            {	 
				countVerify++;       
                temp     = a[j];
                a[j]   = a[j-1];
                countChanges++;
                a[j-1] = temp;
                countChanges++;
                j--;
            }
    }
}

void quickSort(){
	int vetor[tamanho], i, j, temp;
	clock_t begin = clock();
	for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 2000;
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    quick(vetor,0,tamanho-1);
    clock_t end = clock();
    printf("\n\n");
    for(i=0;i<tamanho;i++){
    	printf("%d\t", vetor[i]);
	}
    printf("\n\n");
    dadosExec(begin,end);
}

void quick(int vetor[],int first,int last){
	int i, j, pivot, temp;
	if(first<last){
		countVerify++;
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			countVerify++;
			while(vetor[i]<=vetor[pivot]&&i<last){
				countVerify++;
				i++;
			}
			while(vetor[j]>vetor[pivot]){
				countVerify++;
				j--;
			}
			
			if(i<j){
				countVerify++;
				temp=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=temp;
				countChanges+=2;
			}
		}
		temp=vetor[pivot];
		vetor[pivot]=vetor[j];
		vetor[j]=temp;
		countChanges+=2;
		quick(vetor,first,j-1);
		quick(vetor,j+1,last);
	}
}

void cabecalho(){
	printf("Menu de Opções:\n1-Insertion Sort\n2-Selection Sort\n3-Bubble Sort\n4-Comb Sort\n5-Merge Sort\n6-Heap Sort\n");
	printf("7-Shell Sort\n8-Tim Sort\n9-Quick Sort\n0-Sair\nDigite a Opção: ");
	scanf("%d", &op);
	pedeTamanho();
	switch(op){
		case 1:
			insertSort();
			break;
		case 2:
			selectionSort();
			break;
		case 3:
			bubbleSort();
			break;
		case 4:
			combSort();
			break;
		case 5:
			mergeSort();
			break;
		case 6:
			heapSort();
			break;
		case 7:
			shellSort();
			break;
		case 8:
			timSort();
			break;
		case 9:
			quickSort();
			break;
		case 0:
			exit(0);
		default:
			printf("Digite uma opção válida!");
			sleep(2);
	}
	retornar();
}

