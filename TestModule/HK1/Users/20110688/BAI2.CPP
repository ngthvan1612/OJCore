#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap(char A[],char B[])
{
	scanf("%s",A);
	scanf("%s",B);
}
float tinh(char A[],char B[])
{
	int tong;
	int tong1=0;
	int tong2=0;
	int m=strlen(A);
		int n=strlen(B);
	for(int i=0;i<m;i++)
	{
		if(A[i]>='A'&&A[i]<='F')
		{
			A[i]=A[i]-55;
			tong1=tong1+pow(A[i],16,n-1-i);
		}
		else if(A[i]>='0'&&A[i]<='9')
		{
			A[i]=A[i]-48;
			tong1=tong1+pow(A[i],16,n-1-i);
		}
	}
for(int j=0;j<n;j++)
	{
		if(B[j]>='A'&&B[j]<='F')
		{
			B[j]=B[j]-55;
			tong2=tong2+pow(B[j],16,n-1-j);
		}
		else if(B[j]>='0'&&B[j]<='9')
		{
			B[j]=B[j]-48;
			tong2=tong2+(B[j],16,n-1-j);
		}
	}
tong=tong1+tong2;
return float(tong);
}
void xuat(float kq)
{
	printf("%f",kq);
}





void main()
{
	char A[11],B[11];
	nhap(A,B);
	float kq=tinh(A,B);
	xuat(kq);
}
