#include<stdio.h>

main()
{
      int v[10],w[10],x,j,i,sum=0;
        for(x=0,i=2,j=10;x<10&&i<20&&j<19;x++,i=i+2,j++)
        {
         v[x]=i;
         w[x]=j;
         sum=i+j+sum;
                                                                                                                  
        }
          printf("Somatorio:%d.\n",sum);
          system("pause");
}
