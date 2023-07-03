#include<stdio.h>
main()
{
float saldo,valor;
int opc;
    printf("Digite o saldo inicial\n");
    scanf("%f",&saldo);
do
{
       printf("--Escolha uma das opcoes abaixo--\n");
      printf("1-Deposito\n");
      printf("2-Levantamento\n");
      printf("3-Fim\n");
      printf("Saldo na conta:%.3f\n",saldo);
      scanf("%d",&opc);
      switch(opc)
      {
                 case 1:
                   printf("Valor a ser depositado\n");
                   scanf("%f",&valor); 
                     saldo+=valor;
                 break;
                  case 2:
                   printf("Valor a ser levantado\n");
                   scanf("%f",&valor); 
                      saldo-=valor;
                 break;
      }
}while(opc!=3);
if(saldo==0)
{
  printf("Conta a Zeros\n");          
}
else if(saldo>0)
{
  printf("Conta em Dia\n");   
}
else if(saldo<0)
{
   printf("Conta Estourada\n");  
}
system("pause");
}
