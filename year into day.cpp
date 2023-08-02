#include<stdio.h>

int main()
{
	int year1,year2,year,days,choice,day;
	printf("Welcome to year into days and days into year conversion \n");
	printf("\nChoice from below option :\n");
	printf("\n1.Years into Days \n2.Days into Year\n");
	printf("\nEnter your choice :- ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter the years for converting into days \n");
			printf("starting year :- ");
			scanf("%d",&year1);
			printf("ending year :- ");
			scanf("%d",&year2);
			if(year2>year1)
			{
				year=(year2-year1)+1;
				if(year1%4==0 || year2%4==0)
				{
					days=year*366;
					printf("\n%d days in between %d year to %d year",days,year1,year2);
				}
				else
				{
					days=year*365;
					printf("\n%d days in between %d year to %d year",days,year1,year2);
					
				}
			}
			else
			{
				printf("\nenter starting year smaller than ending year");
			}
			break;
		case 2:
			printf("\nEnter the numbers of days :- ");
			scanf("%d",&days);
			year = days / 365;
			if(days%365!=0)
			{
				days=days%365;
				days=days/30;
				printf("\nThe result is %d year and %d months",year,days);
			}
			else
			{
				printf("\nThe result is %d year ",year);
			}
	}
}
