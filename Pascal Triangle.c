      # include<stdio.h>
void main ()
{
    int i,j,k,m,r,facto,fact,factor,C,n,p,t,num;
    scanf("%d",&m);

     for(i=0;i<=m;i++)
    {
        for(k=m-1;k>=i;k--)
        {
            printf(" ");
        }


	for(j=0;j<=i;j++)
	{
		n=i;
		r=j;
		num=n,fact=1;


		while(num>0)
		{
		   fact=fact*num;
		   num--;
		}
		num=r,facto=1;

		while(num>0)
		{
			facto=facto*num;
			num--;
		}
		t=n-r;
		num=t,factor=1;
		  while(num>0)
		{
			factor=factor*num;
			num--;
		}
		C=fact/(facto*factor);
		printf("%d ",C);
		}
			printf("\n");
	}

}

