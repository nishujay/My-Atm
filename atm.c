#include <stdio.h>
int main(void)
{
int p,m,w,f,c;
m = 25000;
printf("Welcome to Laxmi Chit Fund\n");
printf("Enter your 4 Digit pin number:\n ");
scanf("%d",&p);
if(p==2222)
{
printf("Please Choose transcation:\n");
printf("1-withdraw\n");
printf("2-balance enquiry\n");
printf("3-fast Cash\n");
scanf("%d",&c);
if(c==1)
{
printf("Plese enter withdraw amount:\n");
scanf("%d",&w);
if(w < m && w%100 == 0)
printf("Please Take your Amount = %d",w);
else
printf( "Invalid cash \n ");
}
if(c==2)
{
printf("Your available Amount = %d",m);
}
if(c==3)
{
printf( "1->5,000\n");
printf("2->10,000\n");
printf("3->15,000\n");
printf("4->20,000\n");
printf("Please choose fast cash options:\n");
scanf("%d",&f);
if(f==1 && 5000 < m)
{
printf("please take cash 5000\n");
}
if(f==2 && 10000 < m)
{
printf("please take cash 10000\n");
}
if(f==3 && 15000 < m)
{
printf("please take cash 15000\n");
}
if(f==4 && 20000 < m)
{
printf("please take cash 20000\n");
}
else
printf("Invalid fast cash option\n");
}
else
printf("Wrong choice\n");
}
else
printf("Invalid pin number");
return 0;
}
