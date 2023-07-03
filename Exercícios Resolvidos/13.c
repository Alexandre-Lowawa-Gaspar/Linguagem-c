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
              printf("Positivo.\n");
      }
      else
      if(n<0)
      {
              system("cls");
              system("color F4");
              printf("Negativo.\n");
      } 
      else
      if(n==0)
      {
              system("cls");
              system("color F4");
              printf("Zero.\n");
      }
      system("pause");
      }
