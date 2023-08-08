#include<stdio.h>

int taylor(float x, int n)
{
	static int s=1;
	if(n==0)
		return 1;
	
	s=((1+x/n)*s);
	taylor(x,n-1);
	return s;
}

int  main()
{
	float x=1.0,res;
	
	res=taylor(x,4);
	
	printf("%f\n",res);
	return 0;
}
