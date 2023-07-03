#include<stdio.h>
main()
{
 int n;
 scanf("%d",&n);
 
 int x,y,i,j=0,cont=0,especial=0,k=0,verif=1;
 //Esse codigo so funciona com numeros diferentes de 0
      float v[n],aux[n];
      memset(aux, 0,20); 
      for(x=0;x<n;x++)
        {
         scanf("%f",&v[x]);  
         if(v[x]==0.0){especial++;}                                                                                    
        }
        
          for(x=0;x<n;x++)
        {
        for(i=0;i<n;i++)
        {
          if(v[x]==v[i]){cont++;}                                                                               
        }
        for(i=0;i<n;i++)
        {
        if(v[x]==aux[i]){verif=0;}
        }                         
        if(verif==1){
                  
                     aux[k]=v[x];
                     if(cont==1){
                       printf("%f ocorre:%d vez \n",aux[k],cont);
                       }else{printf("%f ocorre:%d vezes \n",aux[k],cont);}
                      k++;
                     }
        verif=1;
        cont=0;                                                                
        }
        printf("%f ocorre:%d vezes \n",0.0,especial);
          system("pause");

}
