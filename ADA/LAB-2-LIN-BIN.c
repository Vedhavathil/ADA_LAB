#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int rand();
void main()
{
	int array[100],key,i,j,n,low,high,location,choice;
    	void linear_search(int key,int array[100],int n);
    	void binary_search(int key,int array[100],int n);
	double tm;
	clock_t start=0,end=0;
    	printf("ENTER THE SIZE OF THE ARRAY:");
    	scanf("%d",&n);
    	array[n]=999;
	for(int i=0;i<n;i++)
	{
		array[i]=rand()%100;
	}
	printf("the array value are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
    	printf("ENTER THE SEARCH KEY:");
    	scanf("%d",&key);
    	printf("1.LINEAR SEARCH\n");
   	printf("2.BINARY SEARCH\n");
    	printf("ENTER YOUR CHOICE:");
   	scanf("%d",&choice);
    	switch(choice)
   	{
	    	case 1:
		start=clock();
        		linear_search(key,array,n);
		end=clock();
		tm=(end-start)/CLOCKS_PER_SEC;
		printf("the time taken by linear search=%1f\n",tm);
        		break;
    		case 2:
		start=clock();
        		binary_search(key,array,n);
		end=clock();
		tm=(end-start)/CLOCKS_PER_SEC;
		printf("the time taken by binary search=%1f\n",tm);
        		break;
  		default:
		exit(0);
	}   
}
void linear_search(int key,int array[100],int n)
{
        	int i,loc;
        	for(i=1;i<=n;i++)
        	{
            		if(key == array[i])
            		{
                		loc = i;
    		printf("The location of Search Key = %d is %d\n",key,loc);
        		}
    	}
}
void binary_search(int key,int array[100],int n)
{
    	int mid,i,low,high;
    	low = 1;
    	high = n;
    	mid = (low + high)/2;
    	i=1;
    	while(key != array[mid])
    	{
        		if(key <= array[mid])
        		{
            		low = 1;
            		high = mid+1;
            		mid = (low+high)/2;
        		}
        		else
		{  
            		low = mid+1;
            		high = n;
            		mid = (low+high)/2;
        		}
	}
    	printf("location=%d\t",mid);
    	printf("Search_Key=%d Found!\n",key);
}