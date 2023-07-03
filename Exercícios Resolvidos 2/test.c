#include<stdio.h>
main()
{
int a,b,vez=0;

    c:
vez++;
scanf("%d%d",&a,&b);
if((a>250)&&(b>250)&&(a<400)&&(b<400)){
    printf("entrou");                               }
else
{if(vez<=3)goto c;}
printf("fuck");
      system("pause");
}
