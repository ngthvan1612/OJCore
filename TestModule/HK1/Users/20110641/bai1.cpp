#include <stdio.h>
void nhap (int A[]);
void xulyxuat (int A[]);
void main ()
{
	int A[7];
	nhap (A);
	xulyxuat(A);
}
void nhap (int A[])
{
	for (int i=0; i<6; i++)
		scanf ("%d", &A[i]);
}
void xulyxuat (int A[])
{
	int a=0;
	int b=0;
	int c=0;
	if ((A[0]==1 && A[1]==3) || A[0]>A[1])
		a+=3;
	else if ((A[0]==3 && A[1]==1) || A[0]<A[1])
		b+=3;
	else if (A[0]==A[1])
	{
		a+=1;
		b+=1;
	}
	if ((A[2]==1 && A[3]==3) || A[2]>A[3])
		a+=3;
	else if ((A[2]==3 && A[3]==1) || A[2]<A[3])
		c+=3;
	else if (A[2]==A[3])
	{
		a+=1;
		c+=1;
	}
	if ((A[4]==1 && A[5]==3) || A[4]>A[5])
		b+=3;
	else if ((A[4]==3 && A[5]==1) || A[4]<A[5])
		c+=3;
	else if (A[4]==A[5])
	{
		b+=1;
		c+=1;
	}
	printf ("%d %d %d", a, b, c);
}