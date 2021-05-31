#include<stdio.h>
#include<conio.h>
#include<time.h>
int a[20][20],queue[20],visited[20],n,i,j,front=0,rear=-1;
void bfs(int v)
{
for(i=1;i<=n;i++)
if(a[v][i]&&!visited[i])
queue[++rear]=i;
if(front<=rear)
{
visited[queue[front]]=1;
bfs(queue[front++]);
}
}
void main()
{
int v;
double tm;
clock_t start=0,end=0;
printf("enter the number of vertices:\t");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
queue[i]=0;
visited[i]=0;
}
printf("enter the graph data in matrix form:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("\n enter the starting vertex:\n");
scanf("%d",&v);
start=clock();
bfs(v);
end=clock();
tm=((double)(end-start))/CLOCKS_PER_SEC;
printf("\nthe nodes which are reachable are:\n");
for(i=1;i<=n;i++)
if(visited[i])
printf("%d\t",i);
printf("time taken=%1f\t\n",tm);
getch();
}
