#include<stdio.h>
#include<string.h>
#include<math.h>
double tongchuyen(char A[],char B[])
{
	int	t=strlen(A);
	int l=strlen(B);
	double Sa=0;
	double Sb=0;
	strrev(A);
	strrev(B);
	double S=0;
	for(int i=0;i<t;i++)
	{
		if(A[i]<='9'&&A[i]>='0')
		{
			Sa=Sa+(A[i]-'0')*pow(16,i);
		}
		if(A[i]<='Z'&& A[i]>='A')
		{
			Sa=Sa+(A[i]-'A'+10)*pow(16,i);
		}
	}
	for(int j=0;j<l;j++)
	{
		if(B[j]<='9'&&B[j]>='0')
		{
			Sb=Sb+(B[j]-'0')*pow(16,j);
		}
		if(B[j]<='Z'&& B[j]>='A')
		{
			Sb=Sb+(B[j]-'A'+10)*pow(16,j);
		}
	}
	S=Sa+Sb;
	return S;
}
void xuat(double kq)
{
	printf("%0.0f",kq);
}
void main()
{
	char A[11];
	char B[11];
	gets(A);
	gets(B);
	double kq=tongchuyen(A,B);
	xuat(kq);
}