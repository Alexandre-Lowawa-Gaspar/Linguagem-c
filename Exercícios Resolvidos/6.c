#include <stdio.h>
#include <stdlib.h>

/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      const float p1=2.5,p2=2.5,p3=5;
      float n1,n2,n3,Mp;
     
      system("color 1F");
      printf("Digite a primeira,segunda e terceira nota:\n");
      scanf("%f%f%f",&n1,&n2,&n3);
      Mp=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
      printf("A media ponderada e: %.2f\n",Mp);
      system("pause");
      }
