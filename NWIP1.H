#include<stdio.h>
int NW1()
{
    int X1,X2,X3,i;
    float Nw,FX1,FX2,FX3;
    float R1,R2,R3,S1,S2,Result;
    FILE *FPINPUTX,*FPOUTPUTX;
    char Filename[30],ch;
    clrscr();

    gotoxy(25,2);
    textcolor(12);
    cprintf("-+NEWTON INTERPOLATION POLYNOMIAL+-");

    gotoxy(20,3);
    textcolor(9);
    cprintf("............................................");

    gotoxy(22,6);
    textcolor(13);
    cprintf("Enter the file name to open=");
    scanf("%s",&Filename);

        FPINPUTX=fopen(Filename,"r");
        FPOUTPUTX=fopen("Result4.txt","a");

    if(FPINPUTX==NULL)
	{
        gotoxy(22,10);
        printf("Error in open file\n");
        return 0;
    }

    for(i=0;i<4;i++)
    {
    fscanf(FPINPUTX,"%d%d%d%f",&X1,&X2,&X3,&Nw);
    }

        FX1=log10(X1);
        FX2=log10(X2);
        FX3=log10(X3);

    fprintf(FPOUTPUTX,"Print the log values");
    fprintf(FPOUTPUTX,"\nX1 = %.4f \nX2 = %.4f \nX3 = %.4f\n",FX1,FX2,FX3);

        R1=FX1;
        R2=((FX2-FX1)/(X2-X1));
        S1=((FX3-FX2)/(X3-X2));
        R3=((S1-FX2)/(X3-X1));

        Result=R1+R2*(Nw-X1)+R3*(Nw-X1)*(Nw-X2);

    fprintf(FPOUTPUTX,"Newton interpolation polynomial=%f\n",Result);
    fprintf(FPOUTPUTX,"\n");

    fprintf(FPOUTPUTX,"-----------------------------------------------\n");
    fclose(FPINPUTX);
    fclose(FPOUTPUTX);
    return 0;
}

