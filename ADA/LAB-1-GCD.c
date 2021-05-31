#include<stdio.h>
#include<time.h>
int GCD(int a,int b)
{
int r;
r=a%b;
if(r==0)
return b;
else
return(GCD(b,r));
}
int main()
{
int a,b,res;
double start=0,end=0,tm;
printf("enter the values\n");
scanf("%d%d",&a,&b);
start=clock();
res=GCD(a,b);
end=clock();
tm=(end-start)/CLOCKS_PER_SEC;
printf("GCD of A and B =%d\n",res);
printf("time taken=%1f\t\n",tm);
}