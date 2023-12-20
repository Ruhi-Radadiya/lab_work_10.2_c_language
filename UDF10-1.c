//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
//
//Output:
//The sum of an Array: 18

#include<stdio.h>

int add(int a[10000],int n)
{
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
void main()
{
	int n,i;
	
	printf("enter array size:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("enter elements of array:\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("the sum of array is : %d",add(a,n));
}