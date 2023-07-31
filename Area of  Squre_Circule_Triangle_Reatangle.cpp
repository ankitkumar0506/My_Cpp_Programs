#include<stdio.h>
int squre()
{
	float radius;
	printf("Enter Lent\n");
	scanf("%f",&radius);
	printf("value is %f\n",radius*radius );
}
int circul()
{	float radius;
	printf("Enter your Radiusion\n");
	float pi = 3.14;
	scanf("%f",&radius);
	printf("valu is %f\n",pi*radius*radius);
}
int triangle()
{
	float radius;
	printf("Enter Your Radiusion\n");
	scanf("%f",&radius);
	printf("Value is %f\n",radius/radius);
}
int rectangle()
{
	float length;
	float breadth;
		printf("Enter Your Length\n");
	scanf("%f",&length);
		printf("Enter Your Breadth\n");
	scanf("%f",&breadth);
	printf("Value is %f\n",length*breadth);
}
int main()
	{
		printf ("select you radius scal\n");
		int a;
		printf(" 1.Squre\n 2.Circle\n 3.Triangle\n 4.Rectangle");
		scanf("%d",&a);
	if (a==1)
	{
		squre();
	}
	else if (a==2)
	{
		circul();
	}
	else if(a==3)
	{
		triangle();
	}
	else if (a==4)
	{
		rectangle();
	}
}