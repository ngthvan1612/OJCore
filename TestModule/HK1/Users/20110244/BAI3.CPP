#include<stdio.h>
void nhap(int A[],int &n);
int tinhchanle(int A[],int n);
void xuat(int kq);

int main()
{
	int A[100],n;
	nhap(A,n);
	int kq = tinhchanle(A,n);
	xuat (kq);
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
int tinhchanle(int A[],int n)
{
	int diem=0;
	int i=0;
		for (i=0;i<n;i=i++)
		{
			if(A[i]%2!=0)
				diem=diem+1;
			else
				diem=diem-1;
			if(diem==2 || diem==-2)
				diem=i;
		}
		return diem;
}
void xuat(int kq)
{
		printf("%d",kq-1);
}

