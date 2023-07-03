#include<stdio.h>,<stdlib.h>
main()
{
 int m1[5][5],m2[5][5],i,j,verif=1;
      for(i=1;i<=5;i++)
        {
                       for(j=1;j<=5;j++)
                       {
                                       printf("\tNa posicao %d %d\n",i,j);
                        printf("Digite o valor da primeira matriz\n");
                        scanf("%d",&m1[i][j]);
                        printf("Digite o valor da segunda matriz\n");
                        scanf("%d",&m2[i][j]);
                        if(i!=j&&m1[i][j]!=m2[i][j])verif=0;
                       }                                                                                    
        }
        if(verif==0){printf("N sao simetricas!");}
        else{printf("Sao simetricas!");}
        
                                                         
        
          system("pause");

}
