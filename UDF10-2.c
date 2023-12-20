//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
//Input:
//Enter any string: development
//
//Output:
//Length is: 11

#include<stdio.h>
#include<string.h>

int length()
{
	char a[40];
	int len=0;
	printf("Enter any string:");
	gets(a);
	
	len=strlen(a);
	return len;
}
void main()
{
	int ans;
	ans=length();
	printf("length is : %d",ans);
}