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

#ifdef ex3
main()
{
    /*
        3.	Receba tr�s n�meros que garantam a exist�ncia de uma equa��o do segundo grau. Se existirem ra�zes reais exiba-as. Caso n�o existam ra�zes informe ao usu�rio.

        Observa��es:

        a.	Condi��o de exist�ncia de uma equa��o do segundo grau: o coeficiente que acompanha o x2 dever� ser um n�mero diferente de zero.
        b.	Delta maior que zero: a equa��o possui duas ra�zes reais e distintas.
        c.	Delta igual � zero: a equa��o possui duas ra�zes iguais.
        d.	Delta menor que zero: a equa��o n�o apresenta ra�zes reais.

    */

    setlocale(LC_ALL, "Portuguese");

    double  a,b,c,delta,x1,x2,divi;

    do
    {
        printf("Digite tr�s n�meros: \n");
        scanf("%lf" "%lf" "%lf", &a, &b, &c);

        if(a==0)
        {
            printf("O primeiro d�gito n�o pode ser 0, favor digite um n�mero diferente de 0.\n\n");
        }

    }
    while(a==0);

    delta = pow(b,2) - 4 * a * c; //pow potencia��o

    divi = 2 * a;

    if (delta >= 0)
    {

        x1 = (-b + sqrt(delta)) / divi; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / divi;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else if (delta == 0)
    {

        x1 = (-b + sqrt(delta)) / 2*a; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / 2*a;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else
    {
        printf("Esta equa��o n�o possui ra�zes reais.");
    }
}
#endif ex3

#ifdef ex4
main()
{

    /*
        4.	Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x;

    printf("Digite um n�mero: \n");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("O n�mero digitado, %d � par.\n",x);

    }
    else
    {
        printf("O n�mero digitado, %ld � �mpar.\n",x);

    }
}
#endif ex4

#ifdef ex5
main()
{

    /*
        5.	Receba tr�s n�meros que representam os lados de um tri�ngulo e garantam a exist�ncia de um tri�ngulo.

        Informe ao usu�rio se o tri�ngulo � is�scele, equil�tero ou escaleno.

        Observa��es:
        a.	Garantir que cada lado � menor que a soma dos outros dois lados.
        b.	O tri�ngulo � equil�tero quando todos os lados s�o iguais.
        c.	O tri�ngulo � is�scele quando apenas dois lados s�o iguais.
        d.	O tri�ngulo � escaleno quando todos os lados s�o diferentes.

   */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,z;

    do
    {
        printf("Digite tr�s n�meros: \n");
        scanf("%lf" "%lf" "%lf",&x,&y,&z);

        if(x>=y+z || y>=x+z || z>=x+y)
        {
            printf("Os n�meros digitados n�o formam um tri�ngulo\n");
        }

    }
    while(x>=y+z || y>=x+z || z>=x+y);

    if (x==y && x==z)
    {
        printf("O tri�ngulo � equil�tero."); //quando todos os lados s�o iguais.
    }
    else if (x!=y && x!=z && y!=z)
    {
        printf("O tri�ngulo � escaleno."); //quando todos os lados s�o diferentes.
    }
    else
    {
        printf("O tri�ngulo � is�sceles."); //quando apenas dois lados s�o iguais.
    }


}
#endif ex5

#ifdef ex6
main()
{
    /*
        6.	Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura e a altura que o usu�rio deseja subindo a escada.
        Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo, sem se preocupar com a altura do usu�rio.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x,y,deg;
    float degraus;

    do {
            printf("Digite a altura do degrau em cm:\n");
            scanf("%d",&x);

            printf("Digite qual altura deseja subir em metros:\n");
            scanf("%d",&y);

    }while(x<=0 || y<=0 || x>y*100);

    degraus =  y*100/x;
    deg = degraus;

   if(deg==degraus){
    printf("A quantidade de degraus que ter� que subir ser�: %.2f.",degraus);
}
   else{
   printf("A quantidade de degraus que ter� que subir ser�: %d.",deg+1);
   }
}
#endif ex6