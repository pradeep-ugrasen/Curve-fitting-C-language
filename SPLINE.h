
int SPL()
{
   char choice='y';
   int n,i,j,k;
   float h[10],a,b,c,d,sum,s[10]={0},x[10],F[10],f[10],p,m[10][10]={0},temp;
   clrscr();

   printf("\t\t\t -+SPLINE INTERPOLATION+-\n");
   printf("\t\t    ..................................\n\n");
   printf("Input number of data points=");
   scanf("%d",&n);
   printf("\nInput data points, X(I) and \nfunction values F(I), one set in each line\n");

   for(i=0;i<n;i++)
   scanf("%f%f",&x[i],&f[i]);

   for(i=n-1;i>0;i--)
   {
      F[i]=(f[i]-f[i-1])/(x[i]-x[i-1]);
      h[i-1]=x[i]-x[i-1];
   }

  for(i=1;i<n-1;i++){
    m[i][i]=2*(h[i-1]+h[i]);

  if(i!=1)
  {
    m[i][i-1]=h[i-1];
    m[i-1][i]=h[i-1];
  }
   m[i][n-1]=6*(F[i+1]-F[i]);
  }

 for(i=1;i<n-2;i++)
 {
   temp=(m[i+1][i]/m[i][i]);

 for(j=1;j<=n-1;j++)
   m[i+1][j]-=temp*m[i][j];
 }

 for(i=n-2;i>0;i--)
 {
  sum=0;

 for(j=i;j<=n-2;j++)

   sum+=m[i][j]*s[j];
   s[i]=(m[i][n-1]-sum)/m[i][i];
 }

 while(choice=='y')
 {
 printf("\nEnter XP:");
 scanf("%f",&p);
 for(i=0;i<n-1;i++)

 if(x[i]<=p&&p<=x[i+1])
 {
   a=(s[i+1]-s[i])/(6*h[i]);
   b=s[i]/2;
   c=(f[i+1]-f[i])/h[i]-(2*h[i]*s[i]+s[i+1]*h[i])/6;
   d=f[i];
   sum=a*pow((p-x[i]),3)+b*pow((p-x[i]),2)+c*(p-x[i])+d;
  }
 printf("\nCoefficients of sub intervals are:\n%f\n%f\n%f\n%f",a,b,c,d);
 printf("\n\nResult=%f",sum);
 scanf("%c",&choice);
}
return 0;
}
