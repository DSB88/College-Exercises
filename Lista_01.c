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

