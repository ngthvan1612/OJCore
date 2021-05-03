#include <stdio.h>
void nhap(int A[]);
void xuly(int A[]);
void xuat(int a,int b, int c);
int game(int a, int b);
void main()
{
	int A[100];
	nhap(A);
	xuly(A);
}
void nhap(int A[])
{
	for(int i=0;i<6;i++)
		scanf("%d", &A[i]);
}
void xuly(int A[])
{
	int diemA=0;
	int diemB=0;
	int diemC=0;
	if(game(A[0],A[1])==1)
		diemA=diemA+3;
    else if(game(A[0],A[1])==2)
		{
    		diemA=diemA+1;
    		diemB=diemB+1;
		}
	else diemB=diemB+3;
	if(game(A[2],A[3])==1)
		diemA=diemA+3;
    else if(game(A[2],A[3])==2)
		{
    		diemA=diemA+1;
    		diemC=diemC+1;
		}
	else diemC=diemC+3;
	if(game(A[4],A[5])==1)
		diemB=diemB+3;
    else if(game(A[4],A[5])==2)
		{
    		diemB=diemB+1;
    		diemC=diemC+1;
		}
	else diemC=diemC+3;
	xuat(diemA,diemB,diemC);
}
void xuat(int a,int b, int c)
{
	printf("%d %d %d", a,b,c);
}
int game(int a, int b)
{
	if(a==b)
		return 2;
	else
	{
		if (a==1 && b==2)
			return 3;
		else if (a==2 && b==1)
			return 1;
		if (a==3 && b==1)
			return 3;
		else if (a==1 && b==3)
			return 1;
		if (a==2 && b==3)
			return 3;
		else if (a==3 && b==2)
			return 1;
	}
}
