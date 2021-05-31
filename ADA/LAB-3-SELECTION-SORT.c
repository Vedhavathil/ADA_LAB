#include <stdio.h>
 #include<time.h>
int rand();
void selection(int [], int, int, int, int);
int main()
{
int a[1000], n, temp, i, j;
double start=0,end=0,tm;
printf("Enter the size of the list: ");
scanf("%d", &n);
a[n]=9999;
for(i=0;i<=n;i++)
{
a[i]=rand()%100;
}
printf("enter the elements\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
start=clock();
selection(a, 0, 0, n, 1);
end=clock();
printf("the sorted elements are \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
tm=(end-start)/CLOCKS_PER_SEC;
printf("time taken=%1f\t\n",tm);
return 0;
}
 void selection(int a[], int i, int j, int n, int flag)
{
int temp;
if (i < n - 1)
{
if (flag)
{
 j = i + 1;
 }
 if (j < n)
 {
 if (a[i] > a[j])
 {
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 }
selection(a, i, j + 1, n, 0);
}
selection(a, i + 1, 0,n, 1);
 }
}