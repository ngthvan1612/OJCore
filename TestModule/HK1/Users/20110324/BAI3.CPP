#include<stdio.h>
void nhapMang(int A[], int &m);
void xuat(int kq);
int ktchan(int a);
int chanle(int A[], int m);
void main()
{
	int A[1000],m;
	nhapMang(A,m);
	int kq=chanle(A,m);
	xuat(kq);
}
void nhapMang(int A[], int &m)
{
	scanf("%d", &m);
	for (int i=0;i<m;i++)
		scanf("%d", &A[i]);
}
void xuat(int kq)
{
	printf("%d", kq);
}
int ktchan(int a)
{
	if(a%2==0)
		return 1;
	return 0;
}
int chanle(int A[], int m)
{
	int t=0,x;
	for(int i=0;i<m-1;i++)
	{
		if(ktchan(A[i])==1)
		{
			if(ktchan(A[i+1])==0)
				t++;
			else 
			{
				x=i+1;
				i=m;
			}

		}
		else
		{
			if(ktchan(A[i+1])==1)
				t++;
			else
			{
				x=i+1;
				i=m;
			}
		}
	}
	if(t==m-1)
		return -1;
	else 
		return x;

}