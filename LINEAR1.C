int LI1()
{
     float X,Y,LI;
     float fx1,fx2;
     float result,res1,res2,res3;
     int ch;
     printf("\t\t\t    -+Linear Interpolation+-\n");
     printf("\t\t     .....................................\n");

     do
     {
	printf("\n\n\nEnter X axis value=");
	scanf("%f",&X);

	printf("Enter Y axis value=");
	scanf("%f",&Y);

	printf("Enter the Linear interpolation value=");
	scanf("%f",&LI);

	fx1=sqrt(X);
	fx2=sqrt(Y);

	    res1=(LI-X);
	    res2=(fx2-fx1);
	    res3=(Y-X);

	result=fx1+res1*res2/res3;


	printf("Result=%f\n",result);
	printf("\t\tRun Successful\n");
	printf("-----------------------------------------------\n");

	printf("Are you want to calculate then (Yes=1 or No=2)=");
	scanf("%d",&ch);

    }while(ch==1);

	    exit(0);

      getch();
   return 0;
}