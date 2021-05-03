#include<stdio.h>
#include<math.h>
void main()
{
	int A,B,C,x,sum,n;
	sum=0;
	n=0;
	scanf("%d%d",&A,&B);
	C=A+B;
	while(C!=0)
	{
		C=C/10;
		n++;
	}
	for (int i=1;i<=n;i++)
	{
		x=C/10;
		C=C%10;
		sum=sum+x*pow(16,i);
	}
	printf("%d",sum);
}


