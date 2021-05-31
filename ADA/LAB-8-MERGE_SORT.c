#include<stdio.h>
#include<conio.h>
#include<time.h>
int rand();
int a[1000],temp[1000];
void combine(int low,int mid,int high)
{
int i,j,k;
k=low;
i=low;
j=mid+1;
while(i<=mid&&j<=high)
{
if(a[i]<a[j])
{
temp[k]=a[i];
i++;
k++;
}
else
{
temp[k]=a[j];
j++;
k++;
}
}
while(i<=mid)
{
temp[k]=a[i];
k++;
i++;
}
while(j<=high)
{
temp[k]=a[j];
j++;
k++;
}
for(k=low;k<=high;k++)
a[k]=temp[k];
}
void merge_sort(int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
merge_sort(low,mid);
merge_sort(mid+1,high);
combine(low,mid,high);
}
}
void main()
{
int i,low,high,n;
clock_t st=0,et=0;
double ts;
printf("ENTER THE NUMBER OF INPUT SIZE:\t");
scanf("%d",&n);
for(i=0;i<n;i++)
a[i]=rand()%100;
printf("THE RANDOM INPUTS ARE:\n");
for(i=0;i<=n;i++)
printf("%d\t",a[i]);
st=clock();
merge_sort(0,n-1);
et=clock();
ts=((double)(et-st))/CLOCKS_PER_SEC;
printf("\n THE SORTED ARRAY IS:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n THE TIME TAKEN IS %f\n",ts);
}
