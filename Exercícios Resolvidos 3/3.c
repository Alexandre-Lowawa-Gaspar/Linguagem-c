#include<stdio.h>

main()
{
      int n,m;
      printf("Digite a linha da Matriz\n");
      scanf("%d",&n);
      b:
      printf("Digite a coluna da Matriz\n");
      scanf("%d",&m);
      if(m>200)goto b;
      
      int v1[n][m],i,j,x=0,cont=0,menor;
        for(i=0;i<n;i++)
        {
          for(j=0;j<m;j++)
          {
           printf("Digite o valor\n");
           scanf("%d",&v1[i][j]);
           if(j>0)
           {
                  if(v1[i][j]>v1[i][j-1])
                  {
                     x=i;                    
                  }
                  
           }
        }
        }
          printf("A linha da matriz de que contem o menor numero e: %d\n",x);
          system("pause");
}
