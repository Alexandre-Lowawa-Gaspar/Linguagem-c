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
  
      if(n>0)
      {
              system("cls");
              system("color F2");
              printf("Este numero e positivo.\n");
      }
      else
      if(n<0)
      {
              system("cls");
              system("color F4");
              printf("Este numero nao e positivo.\n");
      } 
     
      system("pause");
      }
