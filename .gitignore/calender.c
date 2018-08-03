#include<stdio.h>
#include<stdlib.h>
int leap(int i);
void mont(int n);
int monthd(int m,int yr);
int main()
{
 int year,month,i,d=0,k;
 printf("Enter the year month::");
 scanf("%d%d",&year,&month);
 
 for(i=1900;i<year;i++)
   {d+=leap(i);}
 for(i=1;i<month;i++)
    {d+=monthd(i,year);}
 k=d%7;
 if(d==0)
    k=7; 
printf("_________________________________\n");
printf("           ");mont(month);printf(" %d\n",year);    
printf("_________________________________\n");
printf("Mun  Tue  Wed  Thi  Fri  Sat  Sun\n");
printf("_________________________________\n");
for(i=0;i<k;i++)
   printf("     ");

for(i=1;i<=monthd(month,year);i++)
   {
    if((k-1+i)%7==0)
       printf("\n");
    printf("%3d  ",i);
   } 
 printf("\n");   
return 0;
}   

int leap(int i)
   {
    if(i%100==0)
      {if(i%400==0)
         return 2;
       else return 1;
      }
      
    if(i%4==0)
       return 2;
    else
       return 1;
   }
   
void mont(int n)
  {
   switch(n)
       {
        case 1:printf("JANUARY");
               break;
        case 2:printf("FEBRUARY");
               break;
        case 3:printf("MARCH");
               break;
        case 4:printf("APRIL");
               break;
        case 5:printf("MAY");
               break;
        case 6:printf("JUNE");
               break;
        case 7:printf("JULY");
               break;
        case 8:printf("AUGUST");
               break;
        case 9:printf("SEPTEMBER");
               break;
        case 10:printf("OCTOBER");
               break;
        case 11:printf("NOVEMBER");
               break;
        case 12:printf("DECEMBER");
               break;
        default:{
                 printf("INVALID MONTH\n");
                 exit(0);
                }
         }
                                                                                                            
   } 
int monthd(int m,int yr)
    {if(m==4||m==6||m==9||m==11)
        return 30;
     else
     if(m==2)
       {if(leap(yr)==2)
          return 29;
        else
          return 28;
       }
    else 
      return 31;
    }
        
         
