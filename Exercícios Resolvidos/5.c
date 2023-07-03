#include <stdio.h>,<stdlib.h>
      
      /*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/main()
      {
      int win,lose;
      system("color 1F");
      printf("Digite o numero de vitorias:\n");
      scanf("%d",&win);
      printf("Digite o numero de derrotas:\n");
      scanf("%d",&lose);
      if(win>lose)
      {
              system("cls");
              system("color F2");
              printf("GOOD\n");
      }
      else
      if(win<lose)
      {
              system("cls");
              system("color F4");
              printf("BAD\n");
      }
      else
      if(win=lose)
      {
              system("cls");
              printf("EQUAL\n");
      }
      system("pause");
      }
