#include<stdio.h>,<stdlib.h>
main()
{
 int m1[6][6],i,j,num;
      for(i=1;i<=6;i++)
        {
                       for(j=1;j<=6;j++)
                       {
                                       printf("\tNa posicao %d %d\n",i,j);
                        printf("Digite o valor da matriz\n");
                        scanf("%d",&m1[i][j]);

                       }                                                                                    
        }
                       printf("Digite o valor \n");
                            scanf("%d",&num);
            for(i=1;i<=6;i++)
        {
                       for(j=1;j<=6;j++)
                       {
                         m1[i][j]*=num;
                         printf("%d ",m1[i][j]);
                       } 
                       printf("\n");                                                                                   
        }                

        
                                                         
        
          system("pause");

}
