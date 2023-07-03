#include <stdio.h>
#include <stdlib.h>
    
    /*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
  main()
      {
      int idade;
      char nome[20],sexo[9];
      system("color 1F");
      printf("Digite o nome:\n");
      scanf("%s",&nome);
      printf("Digite o sexo:\n");
      scanf("%s",&sexo);
      printf("Digite a idade:\n");
      scanf("%d",&idade);
      printf("%s\t%d\n",sexo,idade);
      if((strcmp(sexo,"feminino")==0) && (idade<25))
      {
              printf("%s\tAceita\n",nome);
      }
      else
      {
             printf("%s\tNao aceita\n",nome);
      }
      system("pause");
      }
