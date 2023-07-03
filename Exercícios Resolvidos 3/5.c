#include<stdio.h>

main()
{
      int v[20],j=0,x,maior,menor;
        for(x=0;x<5;x++)
        {
         printf("Digite o valor\n");
         scanf("%d",&v[x]);
         
         if(j==0){j++;maior=v[0],menor=v[0];}
          if(v[x]>maior)maior=v[x];
          if(v[x]<menor)menor=v[x];      
                                                                                                                 
        }
          printf("Menor:%d\nMaior:%d\n",menor,maior);
          system("pause");
}
