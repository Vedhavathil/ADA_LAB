#include<stdio.h>
#include<conio.h>
#include<time.h>
int rand();
void exch(int *p,int *q)
{
int temp=*p;
*p=*q;
*q=temp;
}
void quick_sort(int a[],int low,int high)
{
int i,j,key,k;
if(low>=high)
return;
key=low;
i=low+1;
j=high;
while(i<=j)
{
while(a[i]<=a[key])
i=i+1;
while(a[j]>a[key])
j=j-1;
if(i<j)
exch(&a[i],&a[j]);
}
exch(&a[j],&a[key]);
quick_sort(a,low,j-1);
quick_sort(a,j+1,high);
}
void main()
{
int n,a[1000],k;
clock_t st,et;
double ts;
printf("ENTER HOW MANY NUMBERS:\t");
scanf("%d",&n);
printf("\nTHE RANDOM NUMBERS ARE:\t");
for(k=1;k<=n;k++)
{
a[k]=rand()%100;
printf("%d\t",a[k]);
}
st=clock();
quick_sort(a,1,n);
et=clock();
ts=(double)(et-st)/CLOCKS_PER_SEC;
printf("\nSORTED NUMBERS ARE:\n");
for(k=1;k<=n;k++)
{
printf("%d\t",a[k]);
}
printf("\n TIME TAKEN IS %f\n",ts);
getch();
}
