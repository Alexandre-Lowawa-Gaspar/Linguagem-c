#include <stdio.h>,<stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      int n1,n2,opc;
      system("color 1F");
      printf("Digite o primeiro numero:\n");
      scanf("%d",&n1);
      printf("Digite o segundo numero:\n");
      scanf("%d",&n2);
      printf("tabela de Operacoes:\n");
      printf("1- Somar os n�meros\n2- Subtrair os n�meros\n3- Multiplicar os n�meros\n4- Dividir os n�meros\n");
      scanf("%d",&opc);
      switch(opc)
      {
                  case 1:
                       printf("%d+%d=%d\n",n1,n2,n1+n2);
                  break;
                  case 2:
                       printf("%d-%d=%d\n",n1,n2,n1-n2);
                  break;
                  case 3:
                       printf("%d*%d=%d\n",n1,n2,n1*n2);
                  break;
                  case 4:
                       printf("%d\\%d=%f\n",n1,n2,(float)n1/n2);
                  break;
                  
                  default:
                          printf("Opcao invalida!");
                  break;
      }
    
          printf("\n");
      system("pause");
      }
