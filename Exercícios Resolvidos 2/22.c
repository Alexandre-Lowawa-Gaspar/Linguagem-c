#include<stdio.h>,<stdlib.h>
main()
{
int num=0,m,n,i=0,j=0,k=1,maior=0;

printf("Digite o valor n de sequencias a serem lidos\n");
scanf("%d",&n);
printf("Digite o valor m de sequencias a serem lidos\n");
scanf("%d",&m);

for(i=0;i<n;i++){
for(j=0;j<m;j++)
{
printf("Digite o numero\t");
scanf("%d",&num);
if(num>=maior)
{
 maior=num;
}
else
{
 k=0;   
}
}
if(k==1)
{
printf("ordenado\n");
}
else
{
printf("nao ordenado\n");    
}
k=0;
}

               system("pause");
               }
