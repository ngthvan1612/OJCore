#include<stdio.h>
int chanlexenke(int A[],int n);
int ketqua(int A[],int n);
void nhap(int A[],int &n);
void xuat(int kq);
int chanle(int x);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=ketqua(A,n);
	xuat(kq);
}
int ketqua(int A[],int n)
{
	if(chanlexenke(A,n)==n)
		return -1;
	else return 2;
}
int chanlexenke(int A[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		
			if((chanle(A[i])==1) && (chanle(A[i+1]==0)) || (chanle(A[i])==0) && (chanle(A[i+1]==1)))
				dem++;		
	

	}
	return dem;
}
void nhap(int A[],int &n)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int chanle(int x)
{
	if(x%2==0)
		return 1;
	else return 0;

}