#include <stdio.h>,<stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      char sexo;
      system("color 1F");
      printf("Digite o sexo:\n");
      scanf("%s",&sexo);
      switch(sexo)
      {
                  case 'f':
                       printf("Seja bem-vinda, Senhora!\n");
                  break;
                  case 'm':
                       printf("Seja bem-vindo,Senhor!\n");
                  break;
                  default:
                          printf("Opcao invalida!");
                  break;
      }
    
          printf("\n");
      system("pause");
      }
