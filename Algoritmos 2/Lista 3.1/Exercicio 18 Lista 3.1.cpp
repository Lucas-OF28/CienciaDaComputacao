#include <stdio.h>
#include <stdlib.h>

int contarNumPositivos (float num, int cont);

int main ()
{
  float num;
  int cont = 0, repete = 1;
  while (repete) {
      printf ("\nDigite um numero: ");
      scanf("%f",&num);
      cont = contarNumPositivos (num, cont);
      printf ("Mais um numero? (1=SIM   0=NAO): ");
      scanf("%d",&repete);
  }
  printf ("\nQuantidade de numeros positivos = %d.\n\n", cont);
  system("PAUSE");
  return 0;
}

int contarNumPositivos (float num, int cont)
{
  if (num > 0)
  {
       return (cont + 1);
  }
  return (cont);
}


