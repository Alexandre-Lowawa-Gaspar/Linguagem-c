#include<stdio.h>

main()
{
      int m[50][50],v[50],i,j,k=1;
      
       for(i=1;i<=50;i++)
        {
       for(j=1;j<=50;j++)
        {
           printf("Digite o numero\n");
           scanf("%d",&m[i][j]);
           if(i==j)
           {
          v[k]=m[i][j];
          k++;
           }                                                                                      
        }
        }
        for(i=1;i<=50;i++)
        {
         printf(" %d ",v[i]);
        
        }
         
        system("pause");
}
