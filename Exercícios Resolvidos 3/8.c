#include<stdio.h>

main()
{
      int v1[5],v2[5],x,temp;
        for(x=0;x<5;x++)
        {
         printf("Digite o valor em celcius\n");
         scanf("%d",&v1[x]);
         temp=v1[x]*1.8+32;
         v2[x]=temp;                                                                                                       
        }
        for(x=0;x<5;x++)printf("Celsius:%d\tFahrenheit:%d\n",v1[x],v2[x]);
          system("pause");
}
