#include<stdio.h>

#include<time.h>
void move(int,char,char,char);
void move(int n,char source,char dest,char temp)
{
if(n==1)
printf("move  disk 1 from %c to %c\n",source,dest);
else
{
move(n-1,source,temp,dest);
printf("move  disk %d from %c to %c\n",n,source,dest);
move(n-1,temp,dest,source);
}
}
int main()
{
int n;
//char source,dest,temp;
double start=0,end=0,tm;
printf("enter the number of disk\n");
scanf("%d",&n);
start=clock();
move(n,'A','C','B');
end=clock();
tm=(end-start)/CLOCKS_PER_SEC;
printf("time taken=%1f\t\n",tm);
return 0;
}
