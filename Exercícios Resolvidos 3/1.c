#include<stdio.h>

main()
{
      int n;
      printf("Digite o tamanho dos vetores\n");
      scanf("%d",&n);
      int v1[n] , v2[n],i,cont=0;
        for(i=0;i<n;i++)
        {
           printf("Digite o valor do primeiro vetor\n");
           scanf("%d",&v1[i]);
           printf("Digite o valor do segundo vetor\n");
           scanf("%d",&v2[i]); 
           if(v1[i]==v2[i])cont++;
        }
          printf("Existem %d numeros identicos.\n",cont);
          system("pause");
}
