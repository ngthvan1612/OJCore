#include<stdio.h>
void diem_so(int A[], int&a, int &b, int&c);
int qui_doi_diem(int x, int y);
void nhapMang(int A[]);
void xuat(int x, int y, int z);

void main()
{
	int A[100],a,b,c;
	nhapMang(A);
	diem_so(A,a,b,c);
	xuat(a,b,c);
}
void diem_so(int A[], int&a, int &b, int&c)
{
	a = qui_doi_diem(A[0], A[1]) + qui_doi_diem(A[2],A[3]);
	b = qui_doi_diem(A[1], A[0]) + qui_doi_diem(A[4],A[5]);
	c = qui_doi_diem(A[3], A[2]) + qui_doi_diem(A[5],A[4]);
}
int qui_doi_diem(int x, int y)
{
	if(x==y)
		return 1;
	else 
	{
		if((x==1 && y==3) || (x==2 && y==1) || (x==3 && y==2))
			return 3;
		else return 0;	
	}
}
void nhapMang(int A[])
{
	for(int i=0; i<6; i++)
		scanf("%d",&A[i]);
}
void xuat(int x, int y, int z)
{
	printf("%d %d %d",x,y,z);
}
