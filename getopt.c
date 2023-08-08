#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int getlcount(FILE *fp)
{
	rewind(fp);
	int l;
	char ch;
	while(1)
	{
		ch=fgetc(fp);	
		if(ch==EOF)
			break;
		else if(ch=='\n')
			l++;
	}		
	return l;		
}
int getwcount(FILE *fp)
{
	rewind(fp);
	int w;char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else if(ch==' ' || ch=='\n')
			w++;
	}	
	return w;		
}
int getccount(FILE *fp)
{
	rewind(fp);
	int c;
	char ch;
	while(1)
	{
		
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		else
			c++;
	}		
	return c;		
}
int main(int argc,char *argv[])
{
	char optchar;
	FILE *fp;
	int lc,wc,cc;
	fp=fopen(argv[argc-1],"r");
	int x=0;
	while(optchar=getopt(argc,argv,"lwc")!=-1)
	{	
		switch(optchar)
			{
				case 'l' :
					lc=getlcount(fp);
					printf("Line count = %d",lc);
					break;
				
				case 'w':
					wc=getwcount(fp);
					printf("Word count = %d",wc);
					break;	
				
				case 'c':
					cc=getccount(fp);
					printf("Char count = %d",cc);
					break;		
				
				case '?':
					printf("Invalid Command!");
					break;	
				default :
					break;	
			}
				
	
	}
	printf("%s",argv[argc-1]);
	
	/*if(x==0)
	{
	 lc=getlcount(fp);
	 printf("%d",lc);
	 wc=getwcount(fp);
	 printf("%d",wc);
	 cc=getccount(fp);
	 printf("%d",cc);
	}
	*/
}






