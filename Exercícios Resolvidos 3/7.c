#include<stdio.h>

main()
{
      int v[31],j=0,x,maior,menor;
      float media=0.0;
        for(x=0;x<31;x++)
        {
         printf("Digite o índice pluviométrico do dia:%d\n",x+1);
         scanf("%d",&v[x]);
         if(j==0){j++;maior=v[0],menor=v[0];}
          if(v[x]>maior)maior=v[x];
          if(v[x]<menor)menor=v[x];      
         if(x==14 || x==29)media=(float)v[x]/2+media;
                                                                                                                  
        }
          printf("Menor:%d\nMaior:%d\nMedia:%0.3f\n",menor,maior,media);
          system("pause");
}
