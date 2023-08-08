#include<stdio.h>
int fun(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		fun(n-1);
		fun(n-1);
	}		
}

int main()
{
	int n=3;
	fun(n);
	printf("\n");
	return 0;
}
