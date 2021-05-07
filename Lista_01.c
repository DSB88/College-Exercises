#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define ex1

#ifdef ex1
/* 1-)	Receba via teclado dois n�meros quaisquer e exiba a soma entre eles. */
main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;
    do
    {

        printf("Digite dois n�meros: \n");
        scanf("%d" "%d", &x, &y);

        if (x<0 || y<0)
        {
            printf("Digite apenas n�meros positivos\n\n");//Acrescentei ao programa essa regra.
        }
    }
    while(x<0 || y<0);

    soma = x+y;

    printf("A soma dos n�meros digitados �: %d\n",soma);

    system("pause"); // pausa o programa
}
#endif ex1

#ifdef ex2
/* 2-)	Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor. */
main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,ant,suce;


    printf("Digite um n�mero: \n");
    scanf("%d", &x);


    ant = x-1;
    suce = x+1;

    printf("O antecessor do n�mero %d �: %d\n",x,ant);
    printf("O sucessor do n�mero %d �: %d\n",x,suce);

    system("pause"); // pausa o programa
}

#endif ex2

#ifdef ex3
/*    3-) Leia dois valores num�ricos e exibe a diferen�a do maior pelo menor. Se os n�meros forem iguais informe ao usu�rio. */

main()
{
    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;

    printf("Digite dois n�meros: \n");
    scanf("%d" "%d", &x, &y);

    if (x==y)
    {
        printf("Os n�meros digitados foram %d e %d s�o n�meros iguais", x,y);
    }
    else if (x>y)
    {
        soma = x-y;
        printf("A diferen�a entre o n�mero digitado %d e %d � %d\n", x,y,soma);
    }
    else
    {
        soma = y-x;
        printf("A diferen�a entre o n�mero digitado %d e %d � %d\n", x,y,soma);
    }

}

#endif ex3

#ifdef ex4

/* 4-) Receba o pre�o de um produto e calcular novo pre�o com desconto de 9%. */

main()
{

    setlocale(LC_ALL, "Portuguese");

    double  x,aum;

    printf("Digite o valor do produto R$: \n");
    scanf("%lf", &x);

    aum=x - (x*0.09);

    printf("O valor do produto com desconto de 9 porcento fica R$: %.2lf\n", aum); //Acrescentei um arredondamento de 2 casas decimais.

    system("pause"); // pausa o programa
}

#endif ex4


#ifdef ex5
/*

5.	Receba dois n�meros quaisquer, onde o primeiro deve ser maior que zero e o segundo menor ou igual a zero. Calcule e mostre na tela o produto entre eles.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int x,y,multi;

    do
    {
        printf("Digite dois n�meros: \n");
        scanf("%d" "%d", &x,&y);

        if (x<0)
        {
            printf("Seu primeiro n�mero deve ser maior que 0\n");
        }
        else if (y>0)
        {
            printf("Seu segundo n�mero deve ser menor que 0 ou 0\n");
        }

    }
    while(x<0 || y >0);

    multi = x*y;

    printf("A multiplica��o dos n�meros digitados %d e %d � igual: %d\n ",x,y,multi);
    system("pause"); // pausa o programa

}

#endif ex5

