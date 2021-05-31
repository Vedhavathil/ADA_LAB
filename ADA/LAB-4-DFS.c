#include<stdio.h>
#include<conio.h>
#include<time.h>
int a[20][20],reach[20],n;
void dfs(int v)
{
int i;
reach[v]=1;
for(i=1;i<=n;i++)
if(a[v][i]&&!reach[i])
{
printf("\n %d-> %d\n",v,i);
dfs(i);
}
}
void main()
{
int i,j,count=0;
double tm;
clock_t start=0,end=0;
printf("\n enter the number of vertices\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
reach[i]=0;
for(j=1;j<=n;j++)
a[i][j]=0;
}
printf("\n enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
start=clock();
dfs(1);
end=clock();
tm=((double)(end-start))/CLOCKS_PER_SEC;
printf("\n");
printf("time taken=%1f\t\n",tm);
for(i=1;i<=n;i++)
{
if(reach[i])
count++;
}
if(count==n)
printf("\n Graph is connected\n");
else
printf("\n Graph is not connected\n");
getch();
}
