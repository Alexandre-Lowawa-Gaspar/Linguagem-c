#include<stdio.h>

main()
{
      int v1[5],i=0,j,tamanho1=0,tamanho2=0;
      b:
          if(i<5)
          {
             printf("digite o valor\n");
             scanf("%d",&v1[i]);
             if(v1[i]%2==0){tamanho1++;}
             else{ tamanho2++;}
             i++;
             goto b;     
          }
      int v2[tamanho1],v3[tamanho2],x;
      j=0,i=0;
        for(x=0;x<5;x++)
        {
          if(v1[x]%2==0){ v2[i]=v1[x]; i++;}
             else{ v3[j]=v1[x]; j++;}                                                                                          
        }
        for(x=0;x<tamanho1;x++)printf("par:%d\n",v2[x]);
          for(x=0;x<tamanho2;x++)printf("ImPar:%d\n",v3[x]);
          system("pause");
}
