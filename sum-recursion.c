#include<stdio.h>
int sum(int n)
{
	if(n==1 || n==0)
		return 1;
	else
		return sum(n-1)*n;		
}
int main()
{
	int n=5;
	printf("Sum = %d\n",sum(n));
	return 0;
}
