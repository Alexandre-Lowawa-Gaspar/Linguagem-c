#include<stdio.h>

main()
{
      int v[10],num,x,verif=1,i=0;
       memset(v, 0,20);
       b:
             if(i<10){             
             printf("digite o valor\n");
             scanf("%d",&num);
             }
           for(x=0;x<10;x++)
        {
          if(v[x]==num){verif=0; }                                                                                
        }
        if(verif==1){
      
          if(i<10)
          {
                  v[i]=num;
             i++;
             goto b;     
          }
      }else
      {
           
           printf("Ja digitaste esse numero\n");
           verif=1;
           goto b;
       }
        for(x=0;x<10;x++)
        {
                    printf("%d\n",v[x]);
        }
          system("pause");
}
