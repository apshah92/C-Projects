#include<stdio.h>
#include<conio.h>

int *larger(int *, int *);

int main(void)
{
     int a=10,b=55;
     int *p;
     p=larger(&a,&b);
     printf("a=%d b=%d",a,b);
     
     printf(" p=%d",*p);
     getch();
     }
     
int *larger(int *x, int *y)
{
    
    if(*x>*y)
    return(x);
    else
    return(y);
    }     
