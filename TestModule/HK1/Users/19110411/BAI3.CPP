#include<stdio.h>
void nhapmang(int A[], int&nA);
int KT(int A[], int nA);
void xuat(int kq);
void main()
{
	int A[100],nA;
	nhapmang(A,nA);
	int kq=KT(A,nA);
	xuat(kq);
}
void nhapmang(int A[], int &nA)
{
	scanf("%d,&nA");
	for(int i=0; i<nA;i++)
		scanf("%d,&A{i]");
}
int KT(int A[], int nA)
{
	int flag;
	for(int i=0; i<nA-1;i++)
	{
		flag=1;
		if(A[i] + A[i+1]%2!=0)
		{
			flag=0;
			break;
		}
	}
	if (flag==1)
		return -1;
	else
		return i;
}
void xuat(int kq)
{
	printf("%d,kq");
}