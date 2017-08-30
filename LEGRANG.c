int LEP()
{
     int i;
     float X,Y,Z,LIP;
     float fx1,fx2,fx3,res1,res2,res3,result;
     FILE *FPINPUTXYZ,*FPOUTPUTLIP;
     char Filename[30];

     gotoxy(20,2);
     textcolor(12);
     cprintf("-+LAGRANGE INTERPOLATION POLYNOMIAL+-");

     gotoxy(13,3);
     textcolor(9);
     cprintf("..................................................\n");

     gotoxy(22,7);
     printf("Enter the file name to open=");
     scanf("%s",&Filename);

     FPINPUTXYZ=fopen(Filename,"r");
     FPOUTPUTLIP=fopen("Result2.txt","a");

	 if(FPINPUTXYZ==NULL)
	 {
        gotoxy(22,9);
        printf("Error in open file\n");

    return 0;
	}

    for(i=0;i<5;i++)
    {
    fscanf(FPINPUTXYZ,"%f %f %f %f",&X,&Y,&Z,&LIP);

        fx1 = sqrt(X);
        fx2 = sqrt(Y);
        fx3 = sqrt(Z);

    fprintf(FPOUTPUTLIP,"\n %0.f = %0.4f \n %0.f = %0.4f \n %0.f = %0.4f\n",X,fx1,Y,fx2,Z,fx3);

        res1 = ((LIP-Y)*(LIP-Z))/((X-Y)*(X-Z));
        res2 = (LIP-Z)*(LIP-X)/(Y-Z)*(Y-X);
        res3 = (LIP-X)*(LIP-Y)/(Z-X)*(Z-Y);

        result = (fx1*res1)+(fx2*res2)+(fx3*res3);

    fprintf(FPOUTPUTLIP,"Lagrange interpolation polynomial =%0.4f",result);
    }

    fclose(FPINPUTXYZ);
    fclose(FPOUTPUTLIP);

    return 0;
}
