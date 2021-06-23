#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*1)	Calcule e mostre a m�dia dos K primeiros pares e m�ltiplos de cinco.
OBS: K representa a quantidade de n�meros pares solicitados via teclado pelo usu�rio.
Os n�meros pares dever�o ser gerados pelo programador.
Utilize o la�o while para a entrada da quantidade K e um la�o for para o c�lculo da m�dia.
		2, 4, 6, 8, 10, ..
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,m;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    m=2;

    do
    {

        printf("Qual a quantidade de n�meros que deseja digitar: \n");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("Digite um n�mero acima de 0 (zero).");
        }

    }
    while(n<=0);  // la�o para aceitar apenas n�meros acima de zero.

    for(num=1; num <= n; num++)
    {

        k= m * num; // m, simboliza o multiplicador = 2

        if (k%5==0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de n�meros m�ltiplos de cinco e positivos foi de %d", numMulti);

}

#endif ex1

#ifdef ex2
/*2)	Leia um n�mero inteiro representado pela vari�vel N at� que N seja igual a zero.
Exiba uma mensagem informando se o n�mero � par ou �mpar.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  n,num;

    do
    {

        printf("Digite um n�mero\n");
        scanf("%d",&n);

        if(n!=0)
        {
            num=n;
        }

    }
    while(n!=0);

    if(num%2==0)
    {
        printf("O �ltimo n�mero digitado %d � par",num);
    }
    else
    {
        printf("O �ltimo n�mero digitado %d � �mpar",num);
    }
}

#endif ex2

#ifdef ex3
/* 3)	Receba K n�meros inteiros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio
e cada termo pode ser representado pela vari�vel N.
Exiba a quantidade de n�meros positivos recebidos e a m�dia dos n�meros �mpares.
Utilize o la�o do while para a entrada da quantidade K e um la�o while para efetuar os c�lculos solicitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,cont,n,numPositivo;
    float numImpar,soma;
    k=0;
    cont=0;
    numPositivo=0;
    numImpar=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de termos que deseja digitar: \n");
        scanf("%d", &n);
    }
    while(n<=0);

    while(cont<n)
    {

        printf("Digite um n�mero: \n"); //Est� ocorrendo um bug do sistema ao digitar -10.
        scanf("%d", &k);


        if(k>=0)
        {
            numPositivo=numPositivo + 1;
        }
        if (k%2!=0)
        {
            numImpar = numImpar + 1;
            soma = soma + k;
        }
        cont=cont + 1;

    }
    if(numPositivo==0 && numImpar==0)
    {
        printf("\nN�o foram digitados n�meros positivos nem n�meros �mpares");
    }
    else if (numPositivo==0)
    {
        printf("\nN�o foram digitados n�meros positivos e a m�dia dos n�meros �mpares � %.2f",soma/numImpar);
    }
    else if(numImpar==0)
    {
        printf("\nQuantidade de n�meros positivos � %d, n�o foram digitados n�meros �mpares",numPositivo);
    }
    else
    {
        printf("\nQuantidade de n�meros positivos � %d e a m�dia dos n�meros �mpares � %.2f",numPositivo, soma/numImpar);
    }

}

#endif ex3

#ifdef ex4
/* 4)	Receba K n�meros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio e
cada termo pode ser representado pela vari�vel N. Exiba o maior n�mero digitado. Utilize o la�o do while para a entrada
da quantidade K e um la�o for para exibir o maior n�mero.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,maior;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    maior=0;

    do
    {

        printf("Qual a quantidade de n�meros que deseja digitar: \n");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("Digite um n�mero acima de 0 (zero).");
        }

    }
    while(n<=0);  // la�o para aceitar apenas n�meros acima de zero.


    for(num=1; num <= n; num++)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&k);

        if(num==1)
        {
            maior=k;
        }

        if (k > maior)
        {
            maior= k;
        }

    }

    printf("\nO maior n�mero digitado foi %d", maior);

}


#endif ex4

#ifdef ex5
/* 5-)  Receba dois n�meros. Calcule e mostre:
    a)	A soma dos n�meros pares desse intervalo, incluindo os n�meros digitados;
    b)	A multiplica��o dos n�meros �mpares desse intervalo de n�meros incluindo os n�meros digitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,x1,y,par,impar;
    cont=0;
    par=0;
    impar=1;

    printf("Digite dois n�meros: \n");
    scanf("%d %d", &x, &y);

    x1=x;

    while(x1<=y)
    {


        if(x1%2==0)
        {
            par=par + x1;

        }
        else
        {

            impar=impar * x1;

        }

        x1=x1+1; //Contador


    }

    printf("\nA soma dos n�meros pares do intervalo de %d com %d �: %d\n",x,y,par);
    printf("\nA multiplica��o dos n�meros �mpares do intervalo de %d com %d �: %d",x,y,impar);

}

#endif ex5

#ifdef ex6

/* 6)	Receba a quantidade de sal�rios de K indiv�duos. K representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel Sal�rio armazena cada uma dos K sal�rios digitados.
Calcule e mostre a somat�ria dos sal�rios superiores a 3 sal�rios-m�nimos
e inferior ou igual a 7 sal�rios-m�nimos.
Exiba tamb�m o maior e o menor sal�rio encontrado.
Utilize o la�o while para a entrada da quantidade K
e um la�o while para efetuar os c�lculos e as compara��es solicitadas.
Obs: O valor do sal�rio m�nimo dever� ser pesquisado na Internet.
*/
//sal�rio m�nimo em 2021 = R$ 1.100.

main()
{

    setlocale(LC_ALL, "Portuguese");

    int k=0,cont;
    float salario,minimo,maior,menor,somaSalario;
    salario=0;
    cont=0;
    minimo=1100;
    maior=0;
    somaSalario=0;
    menor=0;


    while(k<=0)
    {

        printf("Qual a quantidade de sal�rios que ir� digitar ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite um n�mero maior que 0 (zero).\n");
        }
    }


    while(cont<k)
    {
        cont=cont+1;

        printf("Digite o sal�rio: ");
        scanf("%f",&salario);

        if(salario > 3*minimo && salario <= 7*minimo)
        {
            somaSalario = somaSalario + salario;
        }

        if(cont==1)
        {
            maior=salario;
            menor=salario;
        }
        else if(salario > maior)
        {
            maior=salario;
        }
        else if(salario < menor)
        {
            menor=salario;
        }

    }

    printf("\nA Somat�ria dos sal�rios pedidos � %.2f\n",somaSalario);
    printf("\nO maior dos sal�rios digitados foi %.2f\n",maior);
    printf("\nO menor dos sal�rios digitados foi %.2f\n",menor);

}


#endif ex6

#ifdef ex7
/* 7)	Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel P representa cada peso digitado.
Calcule e mostre a m�dia dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos superiores a 75 quilos.
Exiba tamb�m o menor, a quantidade de vezes que o menor peso foi encontrado e o maior peso encontrado.
Utilize o la�o while para a entrada da quantidade N e um la�o do while para efetuar os c�lculos e as compara��es solicitadas.
*/
main()
{

    setlocale(LC_ALL, "Portuguese");

    int n,cont,cont0,cont1,cont2,cont3;
    float p,peso,menor,maior;
    n=0;
    p=0;
    cont=0,cont0=0,cont1=0,cont2=0,cont3=0;
    peso=0;
    maior=0,menor=0;

    while(n<=0)
    {

        printf("Qual quantidade deseja digitar ? ");
        scanf("%d",&n);

        if(n<=0)
        {
            printf("\nDigite apenas n�meros acima de 0 (zero).\n");  //Feito para avisar o usu�rio de apenas digitar n�meros acima de zero.
        }

    }

    do{

        while(p<=0){

            printf("Digite o peso: ");
            scanf("%f",&p);

            if(p<=0){
                printf("N�mero inv�lido ! Digite acima de 0 (zero).\n");
            }

        }

        if(menor==0 && maior==0)
        {
            maior=p;
            menor=p;
        }

        if(p>=70 && p<= 85,5)
        {
            peso=peso+p;
            cont0=cont0+1;

        }

         if(p>75)
            {
                cont1=cont1 + 1;
            }

        if(p > maior || p==maior)
        {

            if(p!=maior)
            {
                maior=p;
                cont2=1;
            }
            else
            {
                maior=p;
                cont2++;
            }
        }

        if(p < menor || p==menor)
        {

            if(p!=menor)
            {
                menor=p;
                cont3=1;
            }
            else
            {
                menor=p;
                cont3++;

            }
        }


    cont = cont + 1;
    p=0;


    }while(cont < n);


    printf("\nA m�dia dos pesos pedidos � %.2f a quantidade de pessoas com peso acima de 75 kilos � igual a %d.\n",peso/cont0,cont1);
    printf("\nO menor peso � %.2f a quantidade de vezes que apareceu foi %d.\n",menor,cont3);
    printf("\nO maior peso � %.2f e a quantidade de vezes que apareceu foi %d.\n",maior,cont2);
}

#endif ex7

#ifdef ex8
/* 8)	Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano anterior.
        Fa�a um programa que leia os dados digitados pelo usu�rio, sendo que dever�o ser solicitados dados at� que a idade digitada seja um valor negativo.

 Depois, calcule e imprima:

a)	A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b)	A quantidade de mulheres que leram 5 livros ou mais.
c)  A m�dia de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que n�o leram LIVROS.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int idade,livro,quant,quantF,media;
    float cont, quantLiv, idadeH, quantM,soma;
    char sexo;
    idade=1;
    livro=0;
    sexo= 'f','m';
    quant=0;
    quantF=0;
    cont=0;
    quantM=0;
    quantLiv=0;
    idadeH=0;
    soma=0;
    media=0;

    do
    {
        do{
        printf("\nQual sua idade ?\n ");
        scanf("%d",&idade);
        getchar();
        }while(livro<0);

        if(idade > 0)
        {
           cont=cont+1;

           do
           {
            printf("\nQual o seu sexo, digite (m) para homem, ou (f) para Mulher\n");
            scanf("%c",&sexo);
           }while(sexo!='f'&&sexo!='m');

           do
           {
             printf("Quantos livros voc� leu no ano anterior ? \n");
             scanf("%d",&livro);
           }while(livro<0);

           if(idade < 10 && livro > 0)
           {
               quant=quant+livro;
           }

           if (sexo == 'f'  && livro >5)
           {
               quantF = quantF + 1;
           }

           if (sexo == 'm' && livro < 5)
           {
               idadeH = idadeH + idade;
               quantM = quantM + 1;
               media=idadeH/quantM;
           }

           if(livro==0)
           {
               quantLiv=quantLiv+1;
           }
        }

    }
    while(idade>0);

    printf("\nA quantidade de livros lidos por menores de 10 anos �: %d\n",quant);
    printf("\nA quantidade de mulheres que leram 5 livros ou mais �: %d\n",quantF);
    printf("\nA m�dia de idade dos homens que leram menos que 5 livros �: %d\n",media);
    printf("\nO percentual de pessoas que n�o leram livros �: %.2f %%\n",quantLiv*100/cont);

}

#endif ex8

#ifdef ex9
/* 9)	Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve ser digitada pelo usu�rio.
A vari�vel num armazena cada uma dos K n�meros digitados.

Calcule e mostre a quantidade de n�meros positivos divis�veis por 3,
a m�dia dos n�meros negativos.
Exiba tamb�m o maior n�mero encontrado e quantas vezes ele apareceu.

Utilize o la�o do while para a entrada da quantidade K e um la�o for para efetuar os c�lculos e as compara��es solicitadas.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,k,num,quant,maior,quantM;
    float numNeg,quant1;
    num=0;
    quant=0;
    numNeg=0;
    quant1=0;
    maior=0;
    quantM=0;

    do
    {
        printf("Digite a quantidade que deseja ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite qualquer n�mero, menos o n�mero 0 (zero).\n");
        }

    }
    while(k<=0);

    for(i=0; i < k; i++)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&num);

        if(num%3==0 && num>0)
        {
            quant++;
        }

        else if(num<0)
        {
            numNeg+=num;
            quant1++;
        }


        if(num > maior || num==maior)
        {

            if(num!=maior)
            {
                maior=num;
                quantM=1;
            }
            else
            {
                maior=num;
                quantM++;
            }
        }

    }

    printf("O maior n�mero encontrado foi %d e a quantidade de vezes que apareceu foi %d",maior,quantM);

    if(quant > 0 && quant1 > 0)
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual: %d\n",quant);
        printf("A m�dia dos n�meros negativos � igual: %.2f\n",numNeg/quant1);
    }

    else if(quant > 0 && quant1 ==0)
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual: %d\n",quant);
        printf("A m�dia dos n�meros negativos � igual a zero.\n");
    }

    else if(quant == 0 && quant1 > 0)
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual a zero.\n");
        printf("A m�dia dos n�meros negativos � igual: %.2f\n",numNeg/quant1);
    }

    else
    {
        printf("\nA quantidade de n�meros positivos e divis�veis por tr�s � igual a zero.\n");
        printf("A m�dia dos n�meros negativos � igual a zero.\n");
    }
}


#endif ex9

#ifdef ex10

/* 10)	Gere a seguinte sequ�ncia abaixo para K termos.
K representa a quantidade de n�meros que o usu�rio gostaria quer fosse exibida dessa sequ�ncia.
Mostre tamb�m a somat�ria apenas dos n�meros divis�veis por 3 dessa sequ�ncia.
Utilize o la�o do while para a entrada da quantidade K e um la�o for para efetuar os c�lculos solicitados.
		1, 1, 2, 3, 5, 8, 13, 21, .....


        L�gica tentada, abaixo.

        n1  + (n2-i);
		n1=n3;
		n2=n3;

        resultado= n1  + (n2-i);
       n3=resultado;

      printf("%d " "",resultado);
      n1=n3;
      n2=n1;

*/

main()
{

    setlocale(LC_ALL, "Portuguese");


    int x,num, n1, n2,somatoria;
    somatoria=0;
    n1 = 1;
    n2 = 0;

    do
    {
        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um n�mero maior que 0 (zero) !\n");
        }

    }while(x<=0);

    printf (" %d", n1);
    for (int i = 2; i < x; ++i)
    {
        num = n2 + n1;

        if(num%3==0)
        {
            somatoria+=num;
        }

        printf (" %d", num);
        n2 = n1;
        n1 = num;
    }

    printf ("\n\n");

    if(somatoria > 0){
    printf ("A somat�ria dos n�meros divis�veis por tr�s � igual a %d\n",somatoria);
    }
    else{
        printf("N�o existe n�mero divis�vel por tr�s\n");
    }

    system("pause");

}


#endif ex10

#ifdef ex11
/* 11)	Solicite ao usu�rio um n�mero maior ou igual a zero e inteiro representado pela vari�vel num.
Calcular o fatorial desse n�mero.
Utilize o la�o while para a entrada da vari�vel num e um la�o for para efetuar o c�lculo do fatorial.
	     OBS: O Fatorial de zero e de um � um.
         Exemplo de c�lculo do Fatorial:
		5! =5 * 4 * 3 * 2 * 1            ou
		5! =1 * 2 * 3 * 4 *5
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,num,fat;
    num=-1;
    fat=1;

    while(num<0)
    {

        printf("Digite um n�mero: ");
        scanf("%d",&num);

        if(num<0)
        {
            printf("\nDigite um n�mero maior ou igual a 0 (zero)\n");
        }

    }

    for(i=1; i < num; i++)
    {

        fat*=num-i;

    }

    printf("\nO fatorial do n�mero %d �: %d\n",num,fat*i);

}

#endif ex11

#ifdef ex12
/*

12)	Uma empresa contratou a quantidade de funcion�rios representada pela vari�vel Y.
Conforme o valor das vendas mensais, os funcion�rios adquirem pontos que determinar�o seus sal�rios ao final de cada m�s.
Sabe-se que esses funcion�rios trabalhar�o nos meses de novembro a janeiro do ano subsequente.
Utilize os la�os que desejar.

a)	Leia as pontua��es nos tr�s meses de cada funcion�rio;
b)	Calcule e mostre a pontua��o geral de cada funcion�rio nos tr�s meses.
c)	Calcule e mostre a m�dia das pontua��es de cada funcion�rio nos tr�s meses.
d)	Determine e mostre a maior pontua��o atingida entre todos os funcion�rios nos tr�s meses.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int Y,pontuacaoNov,pontuacaoDez,pontuacaoJan,maior,func;
    float somatoria =0;
    pontuacaoNov=0;
    pontuacaoDez=0;
    pontuacaoJan=0;
    somatoria=0;
    maior=0;
    func=0;


    do
    {

        printf("Qual a quantidade de funcion�rios ? ");
        scanf("%d",&Y);

        if(Y<=0)
        {
            printf("N�mero inv�lido! Digite um n�mero superior a 0 (zero).\n");
        }
    }
    while(Y<=0);

    for(int i=0; i < Y; i++)
    {

        do
        {

            printf("Digite a pontua��o do funcionario %i no m�s de novembro: ",i+1);
            scanf("%d",&pontuacaoNov);

            printf("Digite a pontua��o do funcionario %i no m�s de dezembro: ",i+1);
            scanf("%d",&pontuacaoDez);

            printf("Digite a pontua��o do funcionario %i no m�s de janeiro: ",i+1);
            scanf("%d",&pontuacaoJan);

            if(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0)
            {
                printf("\nN�mero digitado Inv�lido ! Digite zero ou um n�mero superior a zero.\n");
            }

        }
        while(pontuacaoNov < 0 || pontuacaoDez < 0 || pontuacaoJan < 0);

        somatoria=pontuacaoNov+pontuacaoDez+pontuacaoJan;


        if(somatoria > maior)
        {
            maior=somatoria;
            func=i;
        }

        printf("\nFuncion�rio %d sua pontua��o nos 3 meses foi: %.0f",i+1,somatoria);
        printf("\nFuncion�rio %d sua pontua��o m�dia nos 3 meses foi: %.2f\n\n",i+1,somatoria/3);

        somatoria=0;

    }

    printf("\--------------------------------------------------\n");
    printf("A maior pontua��o dos 3 meses atingida foi: %d.",maior);
    printf("\nO Funcion�rio n�mero:[%d] foi o que mais pontuou.",func+1);
    printf("\n--------------------------------------------------\n");

}

#endif ex12

#ifdef ex13
/* 13)	Solicite ao usu�rio a quantidade de n�meros de termos que ele deseja.
Exiba a somat�ria dos valores da s�rie abaixo referente a quantidade determinada pelo usu�rio:
Utilize os la�os que desejar.
2,  7, 3, 4,  21, 12 , 8,  63,  48,  16,  189,  192,  32,   567,  768,  64, ...

*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i,x, prim=2, posPrim=1, seg=7, posSeg=2, terc=3, posTerc=3,soma,soma1,soma2,total;
    soma=0;
    soma1=0;
    soma2=0;
    total=0;

    do
    {

        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um n�mero maior ou igual a 0 (zero)\n");
        }

    }
    while(x<=0);

    for (i=1; i<=x; i++)
    {
        if (posPrim == i)
        {
            soma+=prim;
            printf("%d ", prim);
            prim = prim * 2;
            posPrim = posPrim + 3;
        }
        else if (posSeg == i)
        {
            soma1+=seg;
            printf("%d ", seg);
            seg = seg * 3;
            posSeg = posSeg + 3;
        }
        else
        {
            soma2+=terc;
            printf("%d ", terc);
            terc = terc * 4;
            posTerc = posTerc + 3;
        }
    }

    printf("\nA Som�toria dos n�meros � igual a: %d\n", total=soma+soma1+soma2);
}

#endif ex13
