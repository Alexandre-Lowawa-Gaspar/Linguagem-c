#include<stdio.h>

main()
{
      int m[4][4],i,j;
      
       for(i=1;i<=4;i++)
        {
       for(j=1;j<=4;j++)
        {
           m[i][j]=i*j;                                                                                      
        }
        }
        for(i=1;i<=4;i++)
        {
       for(j=1;j<=4;j++)
        {
         printf(" %d ",m[i][j]);
        }
         printf("\n");
        }
         
        system("pause");
}
