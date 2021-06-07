#include <stdio.h>
#include<time.h>
int rand();
void main()
{
int heap[1000], size, i, j, n, root, temp;
double start=0,end=0,tm;
printf("Enter no of elements :");
scanf("%d", &size);
heap[size]=9999;
for(i=0;i<=size;i++)
{
heap[i]=rand()%100;
}
start=clock();
for (i = 1; i < size; i++)
{
n = i;
do
{
root = (n - 1) / 2;             
if (heap[root] < heap[n])   
{
temp = heap[root];
heap[root] = heap[n];
heap[n] = temp;
}
n= root;
} while (n!= 0);
} 
printf("Heap array :");
for (i = 0; i < size; i++)
        printf("%d\t ", heap[i]);
    for (j = size- 1; j >= 0; j--)
    {
        temp = heap[0];
        heap[0] = heap[j];   
        heap[j] = temp;
        root = 0;
        do 
        {
            n = 2 * root + 1;    
            if ((heap[n] < heap[n + 1]) && n < j-1)
                n++;
            if (heap[root]<heap[n] && n<j)    
            {
                temp = heap[root];
                heap[root] = heap[n];
                heap[n] = temp;
            }
            root = n;
        } while (n< j);
    }
end=clock(); 
    printf("The sorted array is : ");
    for (i = 0; i < size; i++)
       printf("\n%d\t", heap[i]);
tm=(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken=%1f\t\n",tm);
}