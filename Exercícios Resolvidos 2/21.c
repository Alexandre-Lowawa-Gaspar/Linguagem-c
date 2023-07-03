#include<stdio.h>
main()
{
      int n,i=0;
      c:
      printf("Write the number\n");
      scanf("%d",&n);
      if(n<0)
      {
             goto c;
      }
      else
      {
          do
          {
                  n=n/10;
       i++;
          }while(n>=1);
          printf("Tem %d digitos\n",i);
      }
      system("pause");
}
