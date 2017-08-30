/*This is program of Curve Fitting*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <LINEAR.h>
#include <LINEAR1.h>
#include <Legrang.h>
#include <Legrang1.h>
#include<LNREC.h>
#include<LNREC1.h>
#include<NWIP.h>
#include<NWIP1.h>
#include<SPLINE.h>
#include<HELP.h>

void ch4(int Input4)
{
	clrscr();

	if(Input4==1)
	   {
		SPL();
	   }
	else
	   {
	       SLP1();
	   }
}

void ch3(int Input3)
{
	clrscr();

	if(Input3==1)
	   {
		NW();
	   }
	else
	   {
		NW1();
	   }
}

void ch2(int Input2)
{
	clrscr();

	if(Input2==1)
	   {
		LNR();
	   }
	else
	   {
		LNR1();
	   }
}

void ch1(int Input1)
{
	clrscr();

	if(Input1==1)
	   {
		LEP1();
	   }
	else
	   {
		LEP();
	   }
}

void ch(int Input)
{
	clrscr();

	if(Input==1)
	    {
		LI1();
	    }
	else
	    {
	      LI();
	    }
}

int main()
{

	int i,j,k,Num;                //variable declaration
	float Num1,Num2,Num3;
	int Input,Input1,Input2,Input3,Input4;

	clrscr();

	gotoxy(35,2);
	textcolor(LIGHTMAGENTA);
	cprintf("+WELCOME+");

	gotoxy(1,3);
	textcolor(LIGHTGREEN);
	for(i=1;i<80;i++)
	{
		cprintf("*");
	}

	printf("\n");

	for(i=0;i<=20;i++)
	{
	   for(j=1;j<=1;j++)
	    {
		cprintf("*");
	    }

	   for(k=1;k<=77;k++)
	    {
		printf(" ");
	    }
	   for(j=1;j<=1;j++)
	    {
		cprintf("*");
	    }

	    printf("\n");
	}

	for(i=1;i<80;i++)
	{
		cprintf("*");
	}

	gotoxy(3,4);
	textcolor(LIGHTRED+128);
	cprintf("Curve Fitting");

	gotoxy(33,4);
	textcolor(YELLOW);
	cprintf("CURVE FITTING");

	gotoxy(65,4);
	textcolor(LIGHTRED+128);
	cprintf("Curve Fitting");

	gotoxy(3,7);
	textcolor(11);
	cprintf(" 1>. LINEAR INTERPOLATION");

	gotoxy(40,7);
	textcolor(11);
	cprintf("2>. LAGRANGE INTERPOLATION POLYNOMIAL");

	gotoxy(3,10);
	textcolor(11);
	cprintf(" 3>. LINEAR REGRESSION LINE");

	gotoxy(40,10);
	textcolor(11);
	cprintf("4>. NEWTON INTERPOLATION POLYNOMIAL");

	gotoxy(24,13);
	textcolor(11);
	cprintf("5>. SPLINE INTERPOLATION");


	gotoxy(3,15);
	textcolor(13);

	cprintf("Enter your choice (1 to 5) =");

	gotoxy(32,15);
	scanf("%d",&Num);

	fflush(stdin);

	switch(Num)
	{
	     case 1:
		   gotoxy(32,16);
		   textcolor(BLUE);
		   printf("Choose Input Type:\n");   //Taking Input Type

		   gotoxy(20,18);
		   printf("1> RUN TIME= 1");

		   gotoxy(36,18);
		   printf("2> TXT FILE= Any other number");

		   gotoxy(3,20);
		   textcolor(13);
		   cprintf("Enter your Input choice (1 or 2)=");

		   gotoxy(37,20);
		   scanf("%d",&Input);
		   ch(Input);
	     break;


	     case 2:
		   gotoxy(32,16);
		   textcolor(BLUE);
		   printf("Choose Input Type:\n");

		   gotoxy(20,18);
		   printf("1> RUN TIME= 1");

		   gotoxy(36,18);
		   printf("2> TXT FILE= Any other number");

		   gotoxy(3,20);
		   textcolor(13);
		   cprintf("Enter your Input choice (1 or 2)=");

		   gotoxy(37,20);
		   scanf("%d",&Input1);
		   ch1(Input1);
	     break;

	     case 3:
		   gotoxy(32,16);
		   textcolor(BLUE);
		   printf("Choose Input Type:\n");

		   gotoxy(20,18);
		   printf("1> RUN TIME= 1");

		   gotoxy(36,18);
		   printf("2> TXT FILE= Any other number");

		   gotoxy(3,20);
		   textcolor(13);
		   cprintf("Enter your Input choice (1 or 2)=");

		   gotoxy(37,20);
		   scanf("%d",&Input2);
		   ch2(Input2);
	     break;

	     case 4:
		   gotoxy(32,16);
		   textcolor(BLUE);
		   printf("Choose Input Type:\n");

		   gotoxy(20,18);
		   printf("1> RUN TIME= 1");

		   gotoxy(36,18);
		   printf("2> TXT FILE= Any other number");

		   gotoxy(3,20);
		   textcolor(13);
		   cprintf("Enter your Input choice (1 or 2)=");

		   gotoxy(37,20);
		   scanf("%d",&Input3);
		   ch3(Input3);
	     break;

	     case 5:
		   gotoxy(32,16);
		   textcolor(BLUE);
		   printf("Choose Input Type:\n");

		   gotoxy(20,18);
		   printf("1> RUN TIME= 1");

		   gotoxy(36,18);
		   printf("2> TXT FILE= Any other number");

		   gotoxy(3,20);
		   textcolor(13);
		   cprintf("Enter your Input choice (1 or 2)=");

		   gotoxy(37,20);
		   scanf("%d",&Input4);
		   ch4(Input4);
	     break;

	     default:
		     gotoxy(38,20);
		     textcolor(7);
		     cprintf("You are enter wrong choice");

	}

	gotoxy(38,22);
	textcolor(15+128);
	textbackground(6);
	cprintf("Run successfully");

	gotoxy(38,24);
	textcolor(15);
	textbackground(10);
	cprintf("-:Press Any Key Terminate the program:-");
	getch();
	return 0;
}