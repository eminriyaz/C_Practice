#include<stdio.h>
void printBin(unsigned int num)
{
	unsigned int checkbit,res;
	for(int i=31;i>=0;i--)
	{
		if((i+1)%4 == 0)
			printf(" ");
		checkbit=1<<i;
		res=num&checkbit;
		if(res==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");	
}
int main()
{
	unsigned int num=0x12345678;
	unsigned int a,b,c,d,e,f,g,h;
	printBin(num);	
	a=(num&0x0000000f)<<28;
	printBin(a);
	b=(num&0x000000f0)<<20;
	printBin(b);
	c=(num&0x00000f00)<<12;
	printBin(c);
	d=(num&0x0000f000)<<4;
	printBin(d);
	e=(num&0x000f0000)>>4;
	printBin(e);
	f=(num&0x00f00000)>>12;
	printBin(f);
	g=(num&0x0f000000)>>20;
	printBin(g);
	h=(num&0xf0000000)>>28;
	printBin(h);
	num=a|b|c|d|e|f|g|h;
	printf("Reversed Number = %x\n",num);
	return 0;
}
