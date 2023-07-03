#include <stdio.h>,<stdlib.h>
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
  
      if((n>=20) && (n<=90))
      {
              system("cls");
              printf("O numero esta entre 20 e 90.\n");
      }
      else
      {
              system("cls");
              printf("O numero nao esta entre 20 e 90.\n");
      } 
     
      system("pause");
      }
