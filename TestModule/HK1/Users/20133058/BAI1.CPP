#include <stdio.h>
void nhap(int A[]);
int trochoi(int A[],int B[]);
void xuat(int B[]);
void main ()
{
	int A[10],B[10];
	nhap(A);
	int kq=trochoi(A,B);
    xuat(B);
}
void nhap(int A[])
{
	for(int i=0;i<6;i++)
		scanf("%d",&A[i]);
}
int trochoi(int A[],int B[])
{
	int x=0;
	int y=0;
	int z=0;
	if((A[0]==1&&A[1]==3)||(A[0]==3&&A[1]==2)||(A[0]==2&&A[1]==1))
		x=x+3;
	else if(A[0]==A[1])
	{
		x=x+1;
		y=y+1;
	}
	else
		y=y+3;
	if((A[2]==1&&A[3]==3)||(A[2]==3&&A[3]==2)||(A[2]==2&&A[3]==1))
		x=x+3;
	else if(A[2]==A[3])
	{
		x=x+1;
		z=z+1;
	}
	else
		z=z+3;
	if((A[4]==1&&A[5]==3)||(A[4]==3&&A[5]==2)||(A[4]==2&&A[5]==1))
		y=y+3;
	else if(A[4]==A[5])
	{
		y=y+1;
		z=z+1;
	}
	else
		z=z+3;
	B[0]=x;
	B[1]=y;
	B[2]=z;
	return 0;
}
void xuat(int B[])
{
	for(int i=0;i<3;i++)
		printf("%d ",B[i]);
}
