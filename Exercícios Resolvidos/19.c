#include <stdio.h>,<stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      int nota;
      system("color 1F");
      printf("Digite a nota do aluno:\n");
      scanf("%d",&nota);

        if(nota>=18 && nota <=20)
      {
              printf("A");
      }
      else if(nota>=15 && nota <=17)
      {
           
              printf("B");
      }
      else if(nota>=10 && nota <=14)
      {
          printf("C");
      }
     else if(nota>=5 && nota <=9)
      {
          printf("D");
      }
      else if(nota>=0 && nota <=4)
      {
          printf("E");
      }
      else
      {
          printf("Opcao invalida");
          }
    
          printf("\n");
      system("pause");
      }
