#include<stdio.h>
#include<conio.h>
#include<time.h>
int rand();
void insertion_sort(int a[],int n);
void main()
{
int a[1000],i,n;
double tm;
clock_t start=0,end=0;
printf("enter the number of elements required\n");
scanf("%d",&n);
a[n]=9999;
for(i=0;i<=n;i++)
{
a[i]=rand()%100;
}
printf("enter the elements are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
start=clock();
insertion_sort(a,n);
end=clock();
tm=((double)(end-start))/CLOCKS_PER_SEC;
printf("\nThe sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);

}
printf("\ntime taken=%1f\n",tm);
getch();
}
void insertion_sort(int a[],int n)
{
int j,k;
if(n<=1)
return;
insertion_sort(a,n-1);
k=a[n-1];
j=n-2;
while (j>=0&&a[j]>k)
{
a[j+1]=a[j];
j--;
}
a[j+1]=k;
}