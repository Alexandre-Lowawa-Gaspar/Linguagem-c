#include<stdio.h>

main()
{
      int v1[10],v2[10],v3[10],x,j=0,i,maior=0;
        for(x=0;x<10;x++)
        {
         printf("Digite o valor do primeiro vetor\n");
         scanf("%d",&v1[x]);
         printf("Digite o valor do segundo vetor\n");
         scanf("%d",&v2[x]);
         if(v1[x]>=v2[x])
         {
         if(j>0){j++;maior=v1[0];}
          if(v1[x]>maior)maior=v1[x];
         }else
         {
         if(j>0){j++;maior=v2[0];}
          if(v2[x]>maior)maior=v2[x];
          }                                                                                                         
        }
        for(x=0;x<10;x++)
        {
             v3[x]=maior;
             printf("%d\n",v3[x]);
        }
          system("pause");
}
