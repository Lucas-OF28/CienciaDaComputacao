#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

float adicao(float mais, float mais2);
float subtracao(float menos, float menos2);
float multiplicacao(float mult, float mult2);
float divisao(float div, float div2);

main()
{
    float n1, n2, adica, subtraca, multiplicaca, divisa ;
    int op;

    printf("Informe N1:");
    scanf("%f", &n1);
    printf("Informe N2:");
    scanf("%f", &n2);
    printf("MENU\n1:Adicao\n2Subtracao\n3:Multiplicacao\n4:Divisao\n");
    scanf("%d", &op);
    if(op==1)
    {
    adica=adicao(n1, n2);
    printf("%f", adica);
    }
    if(op==2)
    {
        subtraca=subtracao(n1, n2);
        printf("%f", subtraca);
    }
    if(op==3)
    {
        multiplicaca=multiplicacao(n1, n2);
        printf("%f", multiplicaca);
    }
    if(op==4)
    {
        divisa=divisao(n1, n2);
        printf("%f", divisa);
    }
}
float adicao(float mais, float mais2)
{
    return mais+mais2;
}
float subtracao(float menos, float menos2)
{
    return menos-menos2;
}
float multiplicacao(float mult, float mult2)
{
    return mult*mult2;
}
float divisao(float div, float div2)
{
    return div/div2;
}
