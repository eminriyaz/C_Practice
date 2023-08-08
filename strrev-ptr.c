#include<stdio.h>

void mystrev(char *p,int l)
{
	int i,j;
	char x;
	for(i=0,j=l-1;i<=l/2;i++,j--)
	{
		x=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=x;
	}
}
int main()
{
	char a[30]="Vageesh is a good boy";
	char *ptr = a;
	int len;
	printf("String before reversing : %s\n",a);
	
	for(len=0;*(ptr+len);len++);
	
	mystrev(ptr,len);
	
	printf("String after reversing : %s\n",a);
		
	return 0;	
}
