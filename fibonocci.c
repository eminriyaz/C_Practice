#include<stdio.h>
int main() 
{
        int n,i,fn=1,sn=1,ln;
        printf("Enter the range to print fibonocci series : \n");
	scanf("%d",&n);
	printf("0 %d %d ",fn,sn);
	for(i=3;i<=n;i++)
	{
		ln=fn+sn;
		printf("%d ",ln);
		fn=sn;
		sn=ln;
	}   
	return 0;
