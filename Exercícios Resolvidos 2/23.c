#include<stdio.h>,<stdlib.h>
main()
{
int x,i=0,j=0,n=0,NumSequencia;
printf("Digite o valor nº de sequencias a serem lidos\n");
scanf("%d",&NumSequencia);
int a,b;


for(x=0;x<NumSequencia;x++)
{
  
printf("Digite o valor de a\n");
scanf("%d",&a);
printf("Digite o valor de b\n");
scanf("%d",&b);

               for(i=1;i<=a;i++)
               {
             
                    for(j=1;j<=b;j++)
                    {
                    if((a%i==0)&&(b%j==0)&&(i==j))
                    {
                 
                    printf("%d/%d\n",a/i,b/i);
                    } 
                    
                   }     
               }
                     
}
             
               system("pause");
               }
