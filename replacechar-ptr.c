#include<stdio.h>
void replaceChar(char *p,char findc,char replc)
{
	for(int i=0;*(p+i);i++)
	{
		if(*(p+i)==findc)
			*(p+i)=replc;
	}
}
int main()
{
	char a[20]="Vageesh is an ahole";
	printf("Original strig is %s\n",a);
	char *ptr;
	ptr=a;
	
	replaceChar(ptr,'a','p');
	printf("String after replacing :: %s\n",a);
	
	return 0;
	
}
