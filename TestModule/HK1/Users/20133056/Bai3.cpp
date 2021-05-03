include<stdio.h>
void xuat(int &kq);
void nhap(int A[], int &n);
int kiemtra(int A[],int n);
void main()
{
	int A[100],n;
	nhap(A,n);
	int kq=kiemtra(A,n);
	xuat(kq);
}
void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for (int i==1;i<=n,i++)
		scanf("%d",&A[i]);
}
int kiemtra(int A[],int n)
{
	int dem=0;
	if (A[1]%2==0)
	{
		for (int j==2;j<=n;j++)
		{
			if(j%2==0)
				if(A[j]%2==1)
					dem++;
		}
		for (int k==3;k<=n;k++)
			if(k%2==1)
				if(A[k]%2==0)
					dem++;
	}
	if(A[1]%2==1)
	{
		for (int j==2;j<=n;j++)
		{
			if(j%2==0)
				if(A[j]%2==0)
					dem++;
		}
		for (int k==3;k<=n;k++)
			if(k%2==1)
				if(A[k]%2==1)
					dem++;
	}
	if(dem==n)
		return dem;
}
void xuat(int &kq)
{
	printf("%d",&kq)
}


