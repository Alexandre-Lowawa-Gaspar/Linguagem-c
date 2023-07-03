#include <stdio.h>
#include <stdlib.h>

/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      int n;
      system("color 1F");
      printf("Digite o numero:\n");
      scanf("%d",&n);
      if(n>20)
      {
              printf("O numero %d e maior que 20.\n",n);
      }
      else if(n<20)
      {
              printf("O numero %d e menor que 20.\n",n);
      }
      else if(n==20)
      {
          printf("O numero %d e igual a 20.\n",n);
      }
      system("pause");
      }
