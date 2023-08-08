#include<stdio.h>

int main()
{
	int a[10]={10,22,11,33,44,55,66,77,88,10};
	int *ptr;
	ptr = a;
	int max;
	max = *ptr;
	for(int i=1;i<10;i++)
	{
		if(*(ptr+i)>max)
			max=*(ptr+i);
	}
	printf("Max = %d\n",max);
	
	return 0;
}
