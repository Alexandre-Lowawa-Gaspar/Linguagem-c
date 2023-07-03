#include<stdio.h>

int x,a=0,b=0;
main()
{

      
     for(x=1000;x<10000;x++)
      {
          a=x/1%100;
          b=x/100%100;   
      if((int)sqrt(x)==a+b)
      {
       printf("%d\n",x);
       }
      }
       system("pause");
}
