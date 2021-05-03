#include<stdio.h>
void nhap(int &d, int &c, int A[][100]);
int tong(int d,int c, int A[][100]);
int ngto(int a);
void xuat(int kq);
void main()
{
	int d,c,A[100][100];
	nhap(d,c,A);
	int kq=tong(d,c,A);
	xuat(kq);
}
void nhap(int &d, int &c, int A[][100])
{
	scanf("%d%d",&d,&c);
	for(int i=0;i<d;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&A[i][j]);
}
int ngto(int a)
{
	if(a<2)
		return 0;
	for(int i=2;i<a;i++)
		if(a%i==0)
			return 0;
	return 1;
}
int tong(int d,int c, int A[][100])
{ 
	int min=999999999,s;
	for(int i=0;i<d;i++)
	{
		s=0;
		for(int j=0;j<c;j++)
			if(ngto(A[i][j])==1)
				s+=A[i][j];
		if(s<min)
			min=s;
	}
	return min;
	if(min==999999999)
		return 0;
}
void xuat(int kq)
{
	printf("%d",kq);
}