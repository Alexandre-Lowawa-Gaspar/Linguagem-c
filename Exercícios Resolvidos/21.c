#include <stdio.h>
#include <stdlib.h>
/*
Autor:Alexandre Lowawa Gaspar
Email:alexandreshmurdagmail.com
Desfrute a minha sintaxe...
*/
main()
{
     
int ano=0,dia=0,mes=0,i;

printf("Escreva o dia:\n");
scanf("%d",&dia);
printf("Escreva o mes:\n");
scanf("%d",&mes);
printf("Escreva o ano:\n");
scanf("%d",&ano);
for(i=0;i<365;i++){
                 switch(mes)
                 {
                 case 1:
                      if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                                
                 break;
                 case 2:
                     
                      if((float)ano/4==(int)ano/4)
                      {
                               if(dia>=1 && dia<=29)
                      {
                                if(dia==29)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      }                        
                          
                      }
                      else
                      {
                              if(dia>=1 && dia<=28)
                      {
                                if(dia==28)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      }  
                      
                  }
                 break;
                 case 3:
                   if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                                  
                 break;                          
                 case 4:
                      if(dia>=1 && dia<=30)
                      {
                                if(dia==30)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                               
                 break; 
                  case 5:
                         if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                            
                 break; 
                  case 6:
                         if(dia>=1 && dia<=30)
                      {
                                if(dia==30)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                            
                 break; 
                  case 7:
                       if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                              
                 break; 
                  case 8:
                       if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                              
                 break; 
                  case 9:
                         if(dia>=1 && dia<=30)
                      {
                                if(dia==30)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                            
                 break; 
                  case 10:
                         if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                            
                 break; 
                  case 11:
                        if(dia>=1 && dia<=30)
                      {
                                if(dia==30)
                                {
                                           dia=1;
                                   printf("%d-%d-%d\n",dia,++mes,ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                             
                 break; 
                  case 12:
                         if(dia>=1 && dia<=31)
                      {
                                if(dia==31)
                                {
                                           dia=1;
                                           mes=1;
                                   printf("%d-%d-%d\n",dia,mes,++ano);
                                }
                                else
                                {
                                   printf("%d-%d-%d\n",++dia,mes,ano);    
                                }
                                
                      }
                      else
                      {
                      printf("Dia invalido!\n"); 
                      } 
                            
                 break; 
                  
                 default:
                         printf("Mes invalido!");                       
                 }

}
system("pause");
}
