#include<stdio.h>
#include<conio.h>
main()
{
	int amt;
	float famt ,dis;
	printf("Enter amount");
	scanf("%d",&amt);
	if(amt>=1000 && amt<=5000)
	{
		dis=amt*0.05;
		famt=amt-dis;
		printf("Gift=Wall clock \n");
	}
	if(amt>5000 && amt<=10000)
	{
		dis=amt*0.10;
		famt=amt-dis;
		printf("Gift=School bag \n");
	}
	if(amt>10000 && amt<=20000)
	{
		dis=amt*0.15;
		famt=amt-dis;
		printf("Gift=Electric iron \n");
	}
	if(amt>20000)
	{
		dis=amt*0.20;
		famt=amt-dis;
		printf("Gift=Smart watch \n");
	}
	else
	{
		famt=0;
		printf(" \n Invalid amt");
	}
	printf("\n famt=%f",famt);
	
}
