#include<stdio.h>

main()
{
      
      int A[5],B[8],i,j;
        for(i=0;i<8;i++)
        {
             if(i<5){
                    printf("Digite o valor do primeiro vetor\n");
                    scanf("%d",&A[i]);
                    }
           printf("Digite o valor do segundo vetor\n");
           scanf("%d",&B[i]); 
        }
         for(i=0;i<5;i++){
         for(j=0;j<8;j++){
         if(A[i]==B[j])printf("%d",A[i]);
         }
         }
          system("pause");
}
