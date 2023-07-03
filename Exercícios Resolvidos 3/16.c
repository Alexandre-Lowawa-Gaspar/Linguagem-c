#include<stdio.h>
main()
{
 int n;
 scanf("%d",&n);
 
 int v[n],x,maior=0,menor=0;
      float media=0.0;
        for(x=0;x<n;x++)
        {
         printf("Digite a idade\n");
         scanf("%d",&v[x]);      
         media=(float)v[x]/n+(float)media;                                                                                                       
        }
        for(x=0;x<n;x++)
        {
         if(v[x]>media)maior++;
         if(v[x]<media)menor++;
                                                                                                                  
        }
          printf("Mais novos:%d\Mais velhos:%d\n",menor,maior);
          system("pause");

}
