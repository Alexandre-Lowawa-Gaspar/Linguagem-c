#include<stdio.h>

main()
{
      int v[5],i=1,x,verif=0;
      
       for(x=0;x<5;x++)
        {
          printf("Digite o numero\n");
          scanf("%d",&v[x]);                                                                                         
        }
       for(x=0;x<5;x++)
        {
         for(i=1;i<=v[x];i++)
         {
         if(v[x]%i==0)verif++;          
         }
         if(verif==2)
         {printf("Elemento:%d\t Primo\n",v[x]);}
         else{printf("Elemento:%d\t Nao e Primo\n",v[x]);}
         verif=0;
        }
         
        system("pause");
}
