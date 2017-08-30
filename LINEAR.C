int LI()
{
	int i;
	char Filename[30];
	float X,Y,LI;
	float fx1,fx2,x,result,res,res1,res2;
	FILE *FPINPUTXY,*FPOUTPUTLI;

	clrscr();

	gotoxy(28,2);
	textcolor(12);
	cprintf("-+LINEAR INTERPOLATION+-\n");

	gotoxy(20,3);
	textcolor(9);
	cprintf("......................................\n");

	gotoxy(22,7);
	textcolor(11);
	cprintf("Enter the file name to open=");
	scanf("%s",&Filename);

	FPINPUTXY=fopen(Filename,"r");
	FPOUTPUTLI=fopen("Result1.txt","a");

	if(FPINPUTXY==NULL)
	{
	    gotoxy(22,10);
	    printf("Error in open file\n");

	  return 0;
	}

    for(i=0;i<5;i++)
    {
       fscanf(FPINPUTXY,"%f %f %f",&X,&Y,&LI);

	fx1 = sqrt(X);
	fx2 = sqrt(Y);

       fprintf(FPOUTPUTLI,"\n%0.f=%0.4f \n%0.f=%0.4f\n",X,fx1,Y,fx2);

	res=(LI-X);
	res1=fx2-fx1;
	res2=Y-X;

	result=fx1+res*res1/res2;

       fprintf(FPOUTPUTLI,"Linear Interpolation=%0.4f\n",result);
    }

	fclose(FPINPUTXY);
	fclose(FPOUTPUTLI);

	return 0;
}
