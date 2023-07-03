#include <stdio.h>
#include <stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
      main()
      {
      int Horas,Minutos,Segundos;
      system("color 1F");
      printf("Digite a hora:minuto:segundo:\n");
      scanf("%d%d%d",&Horas,&Minutos,&Segundos);
      printf("O total de segundos e: %d",(int)((Horas*3600)+(Minutos*60)+Segundos));
      system("pause");
      }
