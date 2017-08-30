
int NW()
{
    int X1,X2,X3,X4;
    float Nw,FX1,FX2,FX3,FX4;
    float R1,R2,R3,S1,S2,Result;
    int ch;

    clrscr();

    printf("\t\t\t -+NEWTON INTERPOLATOON POLYNOMIAL+-\n");
    printf("\t\t       .......................................\n\n");

    do
    {
    printf("Enter the values of x1:\n");
    scanf("%d",&X1);

    printf("Enter the values of x2:\n");
    scanf("%d",&X2);

    printf("Enter the values of x3:\n");
    scanf("%d",&X3);

    printf("Enter the values of x4:\n");
    scanf("%d",&X4);

    printf("Enter the value of Newton Interpolation polynomial:\n");
    scanf("%f",&Nw);

	FX1=log10(X1);
	FX2=log10(X2);
	FX3=log10(X3);
	FX4=log10(X4);

    printf("\nLogX1 = %.4f \nLogX2 = %.4f \nLogX3 = %.4f \nLogX4 = %.4f\n",FX1,FX2,FX3,FX4);

	R1=FX1;
	R2=((FX2-FX1)/(X2-X1));
	S1=((FX3-FX2)/(X3-X2));
	R3=((S1-FX2)/(X3-X1));

	Result=R1+R2*(Nw-X1)+R3*(Nw-X1)*(Nw-X2);

    printf("\nResult=%f\n",Result);

    printf("\t\t\t Run successful\n");
    printf("...........................................\n");

    printf("Are you want to calculate then (Yes=1 or No=2)=");
    scanf("%d",&ch);

    }while(ch==1);

    exit(0);
    getch();
    return 0;

}
