
int LNR1()
{
    int Num,i,pwr=0,Mult;
    int SumX=0,SumY=0,Sump=0,SumXY=0;
    int arr1[5],arr2[5],arr3[5],arr4[5];
    float A,B,R1,R2,R3,R4;
    FILE *FPINPUTXY,*FPOUTPUTXY;
    char Filename[30];

    clrscr();

    gotoxy(25,2);
    textcolor(12);
    cprintf("-+LINEAR REGRESSION LINE+-");

    gotoxy(17,3);
    textcolor(9);
    cprintf("........................................");

    gotoxy(22,6);
    textcolor(11);
    cprintf("Enter the file name to open=");
    scanf("%s",&Filename);

	FPINPUTXY=fopen(Filename,"r");
	FPOUTPUTXY=fopen("Result3.txt","a");

    if(FPINPUTXY==NULL)
	{
	gotoxy(22,8);
	textcolor(4);
	cprintf("Error in open file\n");

    return 0;
	}
   for(i=0;i<5;i++)
    {
       fscanf(FPINPUTXY,"%d%d",&arr1[i],&arr2[i]);
    }

   for(i=0;i<5;i++)
    {
	SumX=SumX+arr1[i] ;

	SumY+=arr2[i];

	pwr=arr1[i]*arr1[i];
	arr3[i]=pwr;
	Sump+=arr3[i];

	Mult=arr1[i]*arr2[i];
	arr4[i]=Mult;
	SumXY+=arr4[i];

	fprintf(FPOUTPUTXY,"%d%4d%4d%4d\n",arr1[i],arr2[i],arr3[i],arr4[i]);
     }

    fprintf(FPOUTPUTXY,"......................................\n");
    fprintf(FPOUTPUTXY,"%d%4d%4d%4d\n",SumX,SumY,Sump,SumXY);


	R1=Num*SumXY-SumX*SumY;
	R2=(Num*Sump-(SumX*SumX));
	B=R1/R2;

	R3=(SumY/Num);
	R4=B*(SumX/Num);
	A=R3-R4;

    fprintf(FPOUTPUTXY,"Linear regression line Y = A + BX\n\n");
    fprintf(FPOUTPUTXY,"The coefficients are:\n");

    fprintf(FPOUTPUTXY,"A=%.2f\n",A);
    fprintf(FPOUTPUTXY,"B=%.2f\n",B);

    fclose(FPINPUTXY);
    fclose(FPOUTPUTXY);

    return 0;
}
