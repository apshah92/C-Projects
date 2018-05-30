#include<stdio.h>
#include<conio.h>

main()
{
     int n,x;
     float sum;
     x=1;
     sum=0.0;
     printf("enter n:");
     scanf("%d",&n);
     while(x<=n)
     {

        
        sum=sum+(1.0/x);
        x=x+1;        
        }
                printf("\n1+1/2+1/3+...1/%d=",n);
                printf("\n%f",sum);
                getch();
                 
      }
