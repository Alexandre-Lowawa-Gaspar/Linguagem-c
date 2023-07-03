#include <stdio.h>,<stdlib.h>
      /*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      int n1,n2;
      system("color 1F");
      printf("Digite o primeiro numero:\n");
      scanf("%d",&n1);
      printf("Digite o segundo numero:\n");
      scanf("%d",&n2);
          
      if((n1+n2)%2==0 && (n1+n2) >10)
      {
              system("cls");
              printf("Par\n");
      }
      else
      if((n1+n2)%3==0 && (n1+n2) >10)
      {
              system("cls");
        
              printf("Impar\n");
      }
    
      system("pause");
      }
