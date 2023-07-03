#include<stdio.h>
main()
{
      int n;
      scanf("%d",&n);
 int v[n],v1[n],v2[n-1],num,i=0;
 while(i<13)
 {
 scanf("%d",&num);
 if(num>=0 && num<=9)
           {
           v[i]=num;
           v1[i]=1;          
           v[n]=-1;
           v1[n]=-1;
 if(v[i]+v1[i]>9||v[i]+v1[i]==1)
   {
    v2[i]=0;            
   }
   else
   {
    v2[i]=v[i]+v1[i];   
    } 
    i++;
           }
 }
 for(i=0;i<13;i++)
 {
                 printf(" %d ",v2[i]);  
 }
 system("pause");
}
