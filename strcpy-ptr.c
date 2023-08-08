#include<stdio.h>

int main()
{
	char a[30]="Yolo Nigga";
	char b[30]="Vageesh is an ahole";
	char *pa,*pb;
	printf("String a = %s\nString b = %s\n",a,b);
	pa=a;
	pb=b;
	
	for(int i=0;*(pb+i);i++)
	{
		*(pa+i)=*(pb+i);
	}
	printf("String a = %s\nString b = %s\n",a,b);
	
	return 0;
	
}
