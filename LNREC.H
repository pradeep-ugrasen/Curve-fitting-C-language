int LNR()
{
    int Num,i,SumX=0,SumY=0, pwr=0,Sump=0 ,Mult,SumXY=0;
    int arr1[5],arr2[5],arr3[5],arr4[5];
    float A,B,R1,R2,R3,R4;
    int ch;
    clrscr();

    printf("\t\t\t -+LINEAR REGRESSION LINE+-\n");
    printf("\t\t     ..................................\n\n");
    do
    {
    printf("Input number of data points N=");
    scanf("%d",&Num);
    printf("\n");
    printf("Input X and Y values, One Set on each line\n");

    for(i=0;i<Num;i++)
    {
    scanf("%d%d",&arr1[i],&arr2[i]);
    }
    printf("......................................\n");

    for(i=0;i<Num;i++)
    {
        SumX=SumX+arr1[i] ;
        SumY+=arr2[i];

        pwr=arr1[i]*arr1[i];
        arr3[i]=pwr;
        Sump+=arr3[i];

        Mult=arr1[i]*arr2[i];
        arr4[i]=Mult;
        SumXY+=arr4[i];

    printf("%d%4d%4d%4d\n",arr1[i],arr2[i],arr3[i],arr4[i]);
    }
    printf("......................................\n");
    printf("%d%4d%4d%4d\n",SumX,SumY,Sump,SumXY);


        R1=Num*SumXY-SumX*SumY;
        R2=(Num*Sump-(SumX*SumX));
        B=R1/R2;

        R3=(SumY/Num);
        R4=B*(SumX/Num);
        A=R3-R4;

    printf("\nLinear regression line Y = A + BX\n\n");
    printf("The coefficients are:\n");

    printf("A=%.2f\n",A);
    printf("B=%.2f\n",B);
    printf("\t\t\t Run Successfull\n");

    printf("-----------------------------------------------\n");

    printf("Are you want to calculate then (Yes=1 or No=2)=");
    scanf("%d",&ch);

    }while(ch==1);

    exit(0);

getch();
    return 0;
}
