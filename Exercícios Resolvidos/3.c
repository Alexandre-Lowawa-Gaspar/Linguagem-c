#include <stdio.h>
#include <stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
main()
{
int idade=0,aux=0,ano=0,dia=0,mes=0;

printf("Escreva a sua idade, em dias:\n");
scanf("%d",&idade);
ano=(int) idade/365;
aux=idade-(ano*365);
mes=(int) aux/31;
aux=aux-(mes*31);
printf("%d Anos ; %d Meses ; %d Dias; \n",ano,mes,aux);
system("pause");
}
