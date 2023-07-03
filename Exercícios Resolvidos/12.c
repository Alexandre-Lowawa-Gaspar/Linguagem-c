#include <stdio.h>
#include <stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      int AnoAtual,AnoNascimento;
      system("color 1F");
      printf("Digite o ano atual:\n");
      scanf("%d",&AnoAtual);
      printf("Digite o ano de nascimento:\n");
      scanf("%d",&AnoNascimento);
      if((AnoAtual-AnoNascimento)>=18)
      {
              printf("Pode votar\n");
      }
      else
      {
              printf("Nao pode votar.\n");
      }
     
      system("pause");
      }
