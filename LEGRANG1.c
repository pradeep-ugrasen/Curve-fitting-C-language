int LEP1()
{
    float X,Y,Z,LIP;
    float fx1,fx2,fx3,res1,res2,res3,result;
    int ch1;

    printf("\t\t     -+LAGRANGE INTERPOLATION POLYNOMIAL+-\n");
    printf("\t\t  ...........................................\n\n");

    do
    {

    printf("Enter X axis value=");
    scanf("%f",&X);

    printf("Enter Y axis value=");
    scanf("%f",&Y);

    printf("Enter Z axix value=");
    scanf("%f",&Z);

    printf("Enter Lagrange interpolation value=");
    scanf("%f",&LIP);

        fx1 = sqrt(X);
        fx2 = sqrt(Y);
        fx3 = sqrt(Z);

        res1 =(( LIP-Y)*(LIP-Z))/((X-Y)*(X-Z));
        res2 = (LIP-Z)*(LIP-X)/(Y-Z)*(Y-X);
        res3 = (LIP-X)*(LIP-Y)/(Z-X)*(Z-Y);

    printf("%f\n%f\n%f\n",res1,res2,res3);

        result = fx1*res1+fx2*res2+fx3*res3;

    printf("\nResult=%f\n",result);
    printf("\t\t\tRun succcessful\n");
    printf("...............................................\n");

    printf("Are you want to calculate then (Yes=1 or No=2)=");
    scanf("%d",&ch1);

    }while(ch1==1);

    exit(0);

getch();
    return 0;
}
