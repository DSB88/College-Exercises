#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        1.	Escrever um algoritmo que receba dois n�meros e informe ao usu�rio se eles s�o iguais ou se s�o distintos.
        Se forem distintos informe qual � o maior.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y;

    printf("Digite dois n�meros: \n");
    scanf("%d" "%d", &x, &y);

    if (x==y)
    {
        printf("Os n�meros digitados s�o iguais.\n");
    }
    else if(x>y)
    {
        printf("Os n�meros digitados s�o diferentes, o maior deles � %d\n",x);
    }
    else
    {
        printf("Os n�meros digitados s�o diferentes, o maior deles � %d\n",y);
    }
}
#endif ex1

#ifdef ex2
main()
{

    /*
        2.	Escrever um algoritmo que leia tr�s n�meros quaisquer
        e informe qual � o maior e se eles forem todos igual informe ao usu�rio e solicite novos dados.

    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y,z;

    do
    {
        printf("Digite tr�s n�meros: \n");
        scanf("%d" "%d" "%d", &x, &y, &z);

        if(x==y && x==z)
        {
            printf("Os n�meros digitados s�o todos iguais, favor digitar novos n�meros.\n");
        }
//10 10 e 10
    }
    while( x==y && x==z);


    if (x>y && x>z)
    {
        printf("O maior n�mero � %d.\n",x);
    }
    else if(y>z)
    {
        printf("O maior n�mero � %d.\n",y);
    }
    else
    {
        printf("O maior n�mero � %d.\n",z);
    }
}
#endif ex2