#include<stdio.h>
#include<conio.h>
int main()
{
	int a=70;
	if(a>=0 && a<=100)
	{
	if(a>=0 && a<=35)
		{
			printf("fail");
		}
		else if(a>=36 && a<=100)
		{
			printf("pass");
		}
		else if(a>=36 && a<50)
		{
			printf("C2 gread");
		}
		else if(a>=51 && a<=60)
		{
			printf("C1 gread");
		}
		else if(a>=61 && a<70)
		{
			printf(" B2 gread");
			
		}
		else if(a>=71 && a<=80)
		{
			printf(" B1 gread");
		}
		else if(a>=81 && a<=90)
		{
			printf( "A2 gread");
		}
		else if(a>=91 && a<=100)
		{
			printf(" very good mark and A1 gread");
		}
	}}
	