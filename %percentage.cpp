#include<stdio.h>
#include<conio.h>
main()
{
	int per;
	printf("Enter percentages");
	scanf("%d",&per);
	if(per>=75 && per<=100)
	{
		printf("A+");
	}
	else
	if(per>=60 && per<75)
	{
		printf("A");
	}
	else
	if(per>=45 && per<60)
	{
		printf("B");
		
	}
	else
	if(per>=35 && per<45)
	{
		printf("C");
	}
	else
	{
		printf("Fail");
	}
}
