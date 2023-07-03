#include<stdio.h>,<stdlib.h>
main()
{
 int m1[5][5],i,j,soma=0;
      for(i=1;i<=5;i++)
        {
                       for(j=1;j<=5;j++)
                       {
                       printf("\tNa posicao %d %d\n",i,j);
                        printf("Digite o valor da matriz\n");
                        scanf("%d",&m1[i][j]);
                        if((i==j)||(i+j==6))
                        {
                        if(i==3&&j==3){soma=m1[i][j]+soma;}
                        soma=m1[i][j]+soma;
                        }
                       }                                                                                    
        }
       
       printf("O somatorio:%d",soma);
        
                                                         
        
          system("pause");

}
