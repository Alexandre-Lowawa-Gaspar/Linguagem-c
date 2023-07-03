#include<stdio.h>
main()
{
float i=1,n,maior=0.0,media=0.0;
do
{
    scanf("%f",&n);
    if(n>60){media+=n/i;}
    if(n>=maior){maior=n;}
    i++;
}while(n>0);
printf("Media aritmetica:%.3f\n O peso do mais pesado:%.2f",media,maior);
system("pause");
}
