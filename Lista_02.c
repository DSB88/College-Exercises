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

#ifdef ex7
main()
{
    /*
        7.	Fa�a um programa que receba a altura e o sexo (1 para homens e 2 para mulheres)
        de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes f�rmulas:
        a.	Para homens (72 * h) � 58
        b.	Para mulheres (62,1* h) � 44.7

    */

    setlocale(LC_ALL, "Portuguese");

    double  x,y;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite qual seu sexo: homem (1), mulher (2).\n");
    scanf("%lf",&y);

    if (x<=0 || y!=1 && y!=2){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while(x<=0 || y!=1 && y!=2);

    system("cls"); //limpar a tela.

    if(y==1){
    y = (72 * x) - 58;
     printf("O seu peso ideal �: %.2lf.",y);
   }

   else{
    y = (62.1 * x) - 44.7;
     printf("O seu peso ideal �: %.2lf.",y);
   }

}
#endif ex7

#ifdef ex8
main()
{
    /*

    8.	O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de
    para dar uma indica��o sobre a condi��o de peso de uma pessoa adulta.
    A f�rmula � IMC = peso / (altura)2. Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condi��o de acordo
    com as condi��es abaixo:

        Resultado		Situa��o

        Abaixo de 17		Muito abaixo do peso
        Entre 17 e 18,49	Abaixo do peso
        Entre 18,5 e 24,99	Peso normal
        Entre 25 e 29,99	Acima do peso
        Entre 30 e 34,99	Obesidade I
        Entre 35 e 39,99	Obesidade II (severa)
        Acima de 40		Obesidade III (m�rbida)

    */
    setlocale(LC_ALL, "Portuguese");

    double  x,y,imc;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite o seu peso.\n");
    scanf("%lf",&y);

    if (x<=0 || y<=0){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while(x<=0 || y<=0);

    imc = y / pow(x,2);

    system("cls"); //limpar a tela.

    if(imc<17){
     printf("Muito abaixo do peso");
   }

   else if(imc<18.49){
     printf("Abaixo do peso");
   }

   else if(imc<24.99){
     printf("Peso normal");
   }

   else if(imc<29.99){
     printf("Acima do peso");
   }

   else if(imc<34.99){
     printf("Obesidade I");
   }

   else if(imc<39.99){
     printf("Obesidade II (severa)");
   }

   else{
    printf("Obesidade III (m�rbida)");
   }

}
#endif ex8

#ifdef ex9
main()
{

    /*
        9.	Fa�a um programa que receba a altura e o peso de uma pessoa.
        De acordo com a tabela a seguir e mostre qual a classifica��o dessa pessoa.

            Altura	          Peso
                              At� 60	      Entre 60 e 90(Inclusive)	  Acima de 90
            Menores que 1,20	A	                D                         G
            De 1,20 a 1,70	    B	                E                         H
            Maiores que 1,70	C	                F                         I

    */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,imc;

    do{

    printf("Digite a sua altura, em metros \n");
    scanf("%lf",&x);

    printf("Digite o seu peso.\n");
    scanf("%lf",&y);

    //limitando a altura em 2.5 para, caso usu�rio digitar em cm, ele receber� a mensagem abaixo.
    if (x<=0 || x > 2.5 || y<=0){
        printf("Dados digitados incorretos, digite novamente.\n\n");
    }

    }while (x<=0 || x > 2.5 || y<=0);

    system("cls"); //limpar a tela.

    if(x<1.20 && y<=60){
     printf("Classifica��o: A");
   }

   else if(x<1.20 && y<=90){
     printf("Classifica��o: D");
   }

   else if(x<1.20 && y>90){
     printf("Classifica��o: G");
   }

    if(x<1.70 && y<=60){
     printf("Classifica��o: B");
   }

   else if(x<1.70 && y<=90){
     printf("Classifica��o: E");
   }

   else if(x<1.70 && y>90){
     printf("Classifica��o: H");
   }

    if(x>1.70 && y<=60){
     printf("Classifica��o: C");
   }

   else if(x>1.70 && y<=90){
     printf("Classifica��o: F");
   }

   else if(x>1.70 && y>90){
     printf("Classifica��o: I");
   }

}
#endif ex9
