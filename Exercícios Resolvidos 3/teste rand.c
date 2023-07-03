#include<stdio.h>,<stdlib.h>
main()
{
 int m1[10][10],m2[10][10],i,j,verif=1;
 //Esse codigo so funciona com numeros diferentes de 0
      for(i=0;i<10;i++)
        {
                       for(j=0;j<10;j++)
                       {
                        m1[i][j]=rand()%1;
                        m2[i][j]=rand()%1;
                        if(m1[i][j]!=m2[i][j])verif=0;
                       }                                                                                    
        }
        if(verif==0){printf("N sao iguais!");}
        else{printf("Sao iguais!");}
        
                                                         
        
          system("pause");

}
