#include<stdio.h>

main()
{
      int v[50],num,verif=1,i=0,par=0,multiplos=0;
       b:
                if(i<50){
             printf("digite o valor\n");
             scanf("%d",&num);
             }
        if(num>0){
      
               if(i<50){
             if(num%2==0)par++;
             if(num%5==0)multiplos++;     
             v[i]=num;
             i++;
             goto b;     
          }
      }else
      {
           
           printf("Esse numero nao e positivo\n");
           goto b;
       }
        
                    printf("Quantidade de pares:%d\tQuantidade de multiplos de 5:%d",par,multiplos);
        
          system("pause");
}
