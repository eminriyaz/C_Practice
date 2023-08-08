#include<stdio.h>
struct date
{
	short int d,m,y;
};

void display_ddmmyyyy(short int day,short int mon,short int year)
{
	if(day<=31)
	{
		if(mon<0 && mon>13)
		{
			if(year>1500 && year<3000)
			{
				printf("DATE : %hd-%hd-%hd");
			}
			else
				printf("Invalid year entered!!!");
		}
		else
			printf("Invalid month entered!!!");
	}
	else
		printf("Invalid date entered!!!");
		

}

int main()
{
	struct date d1;
	printf("Enter the Day in DD format : ");
	scanf("%hd",&d1.d);
	printf("\nEnter the Month in MM format : ");
	scanf("%hd",%d1.m);
	printf("\nEnter the year in YYYY format : ");
	scanf("%hd",&d1.y);
	
	display_ddmmyyy(d1.d,d1.m,d1.y);
	
	return 0;
}
